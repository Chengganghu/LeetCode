//
// Created by ChenggangHu on 17/12/8.
//

#include "SubString.h"

int SubString::lengthOfLongestSubstring(std::string s) {
    int length=s.size();
    int max=0;
    int temp=0;
    bool first = false,second = false;
    for(int i=0;i<length;i++){
        bool flag = false;
        first = true;
        for(int j=i+1;j<length;j++){
            second = true;
            if(s[i]==s[j]){
                temp=j-i;
                flag=true;
                break;
            }
            if(flag) temp=(temp>1)? temp:1;
            else temp=length-i;
        }
        max=(max>temp)? max:temp;
    }
    if(first == false) max=0;
    else if(second == false) max=1;
    return max;
}
