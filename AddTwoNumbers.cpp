//
// Created by ChenggangHu on 17/12/8.
//
/*
 * You are given two non-empty linked lists representing two non-negative integers.
 * The digits are stored in reverse order and each of their nodes contain a single digit.
 * Add the two numbers and return it as a linked list.
 * You may assume the two numbers do not contain any leading zero, except the number 0 itself.
 */
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
        int sum = x + y + carry;//comment
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
