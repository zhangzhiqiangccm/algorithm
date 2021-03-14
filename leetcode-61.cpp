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
  ListNode *rotateRight(ListNode *head, int k) {
    if (head == nullptr) return nullptr;

    int n = 1;
    ListNode *p = head;
    while (p->next) p = p->next, n += 1;
    p->next = head;
    k %= n;
    k = n - k;
    while (k--) p = p->next;
    head = p->next;
    p->next = nullptr;

    return head;
  }
};
