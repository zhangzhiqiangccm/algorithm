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
  ListNode *reverseN(ListNode *head, int n) {
    if (n == 1) return head;

    ListNode *tail = head->next, *p = reverseN(head->next, n - 1);
    head->next = tail->next;
    tail->next = head;

    return p;
  }
  ListNode *reverseBetween(ListNode *head, int m, int n) {
    ListNode ret(0, head), *p = &ret;
    int cnt = n - m + 1;
    while (--m) p = p->next;
    p->next = reverseN(p->next, cnt);

    return ret.next;
  }
};
