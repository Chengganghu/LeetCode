//
// Created by ChenggangHu on 17/12/8.
//

#include "AddTwoNumbers.h"
#include <iostream>
ListNode* AddTwoNumbers::addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *first = new ListNode(0);
    ListNode *act;
    act = first;
    int carry = 0;
    while (l1 != NULL || l2 != NULL) {
        int x = (l1 != NULL) ? l1->val : 0;
        int y = (l2 != NULL) ? l2->val : 0;
        if (l1 != NULL) l1 = l1->next;
        if (l2 != NULL) l2 = l2->next;
        int sum = x + y + carry;
        carry = sum / 10;
        act->next = new ListNode(sum % 10);
        act = act->next;
    }
    if (carry) {
        act->next = new ListNode(carry);
    }
    return first->next;
}

void AddTwoNumbers::display(ListNode *node) {
    while(node!=NULL){
        std::cout<<node->val<<",";
        node=node->next;
    }
    std::cout<<std::endl;

}
