#include <bits/stdc++.h>

using namespace std;

void squareArray(vector<int>& nums)
{
    int temp = 0;
    int cnt = 0; //
    for (int i : nums) {
        temp = pow(i, 2);
        nums[cnt] = temp;
        cnt++;
    }
}

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        squareArray(nums);
        sort(nums.begin(), nums.end());
        return nums;
    }
};

int main(int argc, char ** argv)
{  
    vector<int> nums = {-4,-1,0,3,10};
    Solution solution = Solution();
    solution.sortedSquares(nums);
    for (int i : nums) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}