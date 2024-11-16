//
// Created by Jerry Solis on 11/15/24.
//
// LeetCode Problem: 1929. Concatenation of Array

#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result;
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < nums.size(); ++j) {
                result.push_back(nums[j]);
            }
        }
        return result;
    }
};

int main() {
    Solution solution;
    vector<int> nums = {1, 2, 3};
    solution.getConcatenation(nums);
    cout << "The concatenated array is: ";
    for (int i = 0; i < nums.size() * 2; ++i) {
        cout << nums[i] << " ";
    }

    return 0;
}