#include "common.h"

class Solution {
 public:
  int getNext(int x) {
    int z = 0;
    while (x) {
      z += (x % 10) * (x % 10);
      x /= 10;
    }

    return z;
  }

  bool isHappy(int n) {
    int p = n, q = n;
    do {
      p = getNext(p);
      q = getNext(getNext(q));
    } while (p != q && q != 1);

    return q == 1;
  }
};
