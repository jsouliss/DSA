//
// Created by Jerry Solis on 9/24/24.
//

#include <iostream>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = 0;
        for (int currIndex = 1; currIndex < nums.size(); currIndex++) {
            if(nums[prev] != nums[currIndex]) {
                prev += 1;
                nums[prev] = nums[currIndex];
            }
        }
        return prev + 1; // return the length of the array
    }
};

int main() {
    Solution solution = Solution();
    vector<int> arr = {1, 1, 2};

    cout << solution.removeDuplicates(arr) << endl;

    return 0;
}