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
  ListNode *__reverseN(ListNode *head, int n) {
    if (n == 1) return head;

    ListNode *tail = head->next, *p = __reverseN(head->next, n - 1);
    head->next = tail->next;
    tail->next = head;

    return p;
  }
  ListNode *reverseN(ListNode *head, int n) {
    ListNode *p = head;
    int cnt = n;
    while (--n && p) p = p->next;
    if (p == nullptr) return head;

    return __reverseN(head, cnt);
  }
  ListNode *reverseKGroup(ListNode *head, int k) {
    ListNode ret(0, head), *p = &ret, *q = p->next;
    while ((p->next = reverseN(q, k)) != q) {
      p = q;
      q = p->next;
    }

    return ret.next;
  }
};
