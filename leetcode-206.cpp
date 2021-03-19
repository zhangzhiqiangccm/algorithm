#include "common.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
 public:
  ListNode *reverseList(ListNode *head) {
    if (head == nullptr || head->next == nullptr) return head;

    ListNode *tail = head->next, *p = reverseList(head->next);
    head->next = tail->next;
    tail->next = head;

    return p;
  }
};
