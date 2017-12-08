//
// Created by ChenggangHu on 17/12/8.
//

#ifndef LEETCODE_ADDTWONUMBERS_H
#define LEETCODE_ADDTWONUMBERS_H

#include <clocale>

struct ListNode{
    int val;
    ListNode* next;
    ListNode(int x):val(x),next(NULL){};
};
class AddTwoNumbers {
    public:
        ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) ;
        void display(ListNode* node);
};



#endif //LEETCODE_ADDTWONUMBERS_H
