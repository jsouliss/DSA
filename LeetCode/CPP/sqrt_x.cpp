#include <iostream>
using namespace std;

/**
 * Given a non-negative integer x, return the square root of x rounded
 * down to the nearest integer. The returned integer should be non-negative as
 * well. You must not use any built-in exponent function or operator.
 *
 * For example, do not use pow(x, 0.5) in c++ or x ** 0.5 in python.
 */

/*
 * Comparison Logic:
 * If piv * piv > x, the square root cannot be greater than or equal to piv.
 * Therefore, we search in the lower half by setting r = piv - 1.
 * If piv * piv < x, the square root could be greater than piv, so we search in
 * the upper half by setting l = piv + 1.
 */

int mySqrt(int x) {
  if (x == 0)
    return 0;
  if (x == 1)
    return 1;
  int r = x / 2;
  int l = 2;
  while (l <= r) {
    long piv = l + (r - l) / 2;
    if (piv * piv == x) {
      return piv;
    } else if (piv * piv > x) {
      r = piv - 1;
    } else {
      l = piv + 1;
    }
  }
  return r;
}

int main() {
  int x = 4;
  cout << mySqrt(x);

  return 0;
}
