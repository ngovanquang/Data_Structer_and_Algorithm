#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int length = nums.size();
        if (length == 0 || length == 1) return nums;
        int cnt = 0;
        for (int i = 0; i < length; i++) {
            if (nums[i] % 2 == 0) cnt++;
        }
        int leftIndex = 0;
        int rightIndex = length - 1;
        while (cnt > 0)
        {
            int temp = 0;
            if (nums[leftIndex] % 2 != 0 && nums[rightIndex] % 2 == 0) {
                temp = nums[leftIndex];
                nums[leftIndex] = nums[rightIndex];
                nums[rightIndex] = temp;
                leftIndex++;
                rightIndex--;
                cnt--;
            } else if (nums[leftIndex] % 2 != 0 && nums[rightIndex] % 2 != 0) {
                rightIndex--;
            } else if (nums[leftIndex] % 2 == 0) {
                leftIndex++;
                cnt--;
            }
        }
        return nums;
    }
};

int main(int argc, char ** argv)
{
    vector<int> nums = {3,1,2,4};

    Solution solution = Solution();
    solution.sortArrayByParity(nums);

    for (int i : nums) {
        cout << i;
        if (i != nums.size() - 1) {
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}