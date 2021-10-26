#include <bits/stdc++.h>

using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int length = nums.size();

    for (int i = 0; i < length; i++)
    {
        nums[i] = nums[i]*nums[i];
    }
    sort(nums.begin(), nums.end());
    return nums;
}

int main(int argc, char** argv)
{

    return 0;
}