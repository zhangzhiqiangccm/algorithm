#include "common.h"

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

class Solution {
 public:
  ListNode *detectCycle(ListNode *head) {
    if (head == nullptr) return nullptr;

    ListNode *p = head, *q = head;
    if (q->next == nullptr) return nullptr;
    do {
      p = p->next;
      q = q->next->next;
    } while (p != q && q && q->next);

    if (q == nullptr || q->next == nullptr) return nullptr;

    p = head;
    while (p != q) p = p->next, q = q->next;

    return q;
  }
};
