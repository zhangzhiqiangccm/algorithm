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
  ListNode *removeNthFromEnd(ListNode *head, int n) {
    ListNode ret(0, head), *p = &ret, *q = head;
    while (n--) q = q->next;
    while (q) p = p->next, q = q->next;
    p->next = p->next->next;

    return ret.next;
  }
};
