#include <bits/stdc++.h>

using namespace std;

int thirdMax(vector<int>& nums) {
    int length = nums.size();
    sort(nums.begin(), nums.end());
    int temp = nums[length - 1];
    int max = temp;
    int cnt = 1;
    for (int i = length - 2 ; i >= 0; i--)
    {
        if (nums[i] != temp)
        {
            temp = nums[i];
            cnt++;
            if (cnt == 3) return temp;
        }
    }

    return max;        
}

int main(int argc, char** argv)
{
    vector<int> nums = {1, 1, 2};
    cout << thirdMax(nums) << endl;
    return 0;
}