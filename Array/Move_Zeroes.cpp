#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int length = nums.size();
        int currentIndex = 0;
        for (int i = 1; i < length; ++i) {
            if (nums[currentIndex] != 0) currentIndex++;
            if (nums[i] != 0 && nums[currentIndex] == 0) {
                nums[currentIndex] = nums[i];
                nums[i] = 0;
            }
        }
    }
};

int main(int argc, char** argv) {
    vector<int> nums = {0,1,0,3,12};
    Solution solution = Solution();
    solution.moveZeroes(nums);
    for (int i : nums) {
        cout << i;
        if (i != nums.size() -1) { cout << " "; }
    }
    cout << endl;
    return 0;
}