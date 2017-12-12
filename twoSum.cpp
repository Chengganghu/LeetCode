//
// Created by ChenggangHu on 17/12/9.
//

#include "twoSum.h"

std::vector<int>* twoSum(std::vector<int> &nums, int target) {
    int length = nums.size();
    for(int i=0;i<length;i++){
        for(int j=i+i;j<length;j++){
            if(nums[i]+nums[j]==target)
                return new std::vector<int>{nums[i],nums[j]};
        }

    }
    throw std::bad_exception();
}
