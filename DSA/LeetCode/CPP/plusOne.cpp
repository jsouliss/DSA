#include <iostream>
#include <vector>
using namespace std;

/**
 * You are given a large integer represented as an integer array digits,
 * where each digits[i] is the ith digit of the integer. The digits are
 * ordered from most significant to least significant in left-to-right
 * order. The large integer does not contain any leading 0's.
 *
 * Increment the large integer by one and return the resulting array of digits.
 */

vector<int> plusOne(vector<int> &digits) {
  bool carry = true;
  for (int i = digits.size() - 1; i >= 0; --i) {
    if (digits[i] == 9) {
      digits[i] = 0;
      carry = true;
    } else if (carry == true && digits[i] == 9) {
      digits[i] += 1;
      carry = false;
    } else {
      digits[i] += 1;
      carry = false;
      break;
    }
  }
  if (carry) {
    digits.insert(digits.begin(), 1);
  }

  return digits;
}

int main() {
  // vector<int> digits = {4, 3, 2, 1};
  vector<int> digits = {9};
  // vector<int> digits = {1,2,3};
  plusOne(digits);

  for (int i = 0; i < digits.size(); ++i) {
    cout << digits[i] << " ";
  }

  return 0;
}
