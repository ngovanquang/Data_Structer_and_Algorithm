#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int length = nums.size();
        for (int i = 0; i < length; i++){
            if (nums[i] == val) {
                for(int j = i+1; j < length; j++){
                    nums[j-1] = nums[j];
                }
                length--;
                i--;
            }
        }
        return length;
    }

    int removeElement2(vector<int>& nums, int val) {
        int length = nums.size();
        for (int i = 0; i < length; i++) {
            if (nums[length - 1] == val) {
                length--;
            } else if (nums[i] == val) {
                nums[i] = nums[length - 1];
                length--;
            }
        }
        return length;
    }
};

int main(int argc, char ** argv)
{
    vector<int> nums = {0,1,2,2,3,0,4,2};
    int val = 2;
    Solution solution = Solution();
    int length = solution.removeElement2(nums, val);
    cout << length << endl;
    for (int i = 0; i < length; i++) {
        cout << nums[i];
        if (i != length - 1) cout << " ";
    }
    cout << endl;
    return 0;
}