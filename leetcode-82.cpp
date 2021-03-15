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
  ListNode *deleteDuplicates(ListNode *head) {
    ListNode ret(0, head), *p = &ret, *q;

    while (p->next) {
      if (p->next->next && p->next->val == p->next->next->val) {
        q = p->next->next;
        while (q && q->val == p->next->val) q = q->next;
        p->next = q;
      } else {
        p = p->next;
      }
    }

    return ret.next;
  }
};
