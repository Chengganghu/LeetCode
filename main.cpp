#include <iostream>
#include "AddTwoNumbers.h"
#include "twoSum.h"
#include "SubString.h"
int main() {
    std::cout << "Hello, World!" << std::endl;
    AddTwoNumbers* a = new AddTwoNumbers();
    ListNode* l1 =new ListNode(2);
    ListNode* l2 =new ListNode(9);
    ListNode* l3 =new ListNode(0);
    ListNode* l4 =new ListNode(8);
    l1->next=l2;
    l2->next=l3;
    l3->next=l4;
    ListNode* res = a->addTwoNumbers(l1,l2);
    a->display(l1);
    a->display(l2);
    a->display(res);
    std::vector<int> vec ={1,2,3,4,5,6,7} ;
    std::vector<int>* target = twoSum(vec,8);
    SubString* s = new SubString();
    int numberSubstring = s->lengthOfLongestSubstring("abcabcbb");
    std::cout<<numberSubstring<<std::endl;
    int numberSubstring01 = s->lengthOfLongestSubstring("huchenggang");
    std::cout<<numberSubstring01<<std::endl;
    return 0;
    //modifier  apres fixer le confilic
}
