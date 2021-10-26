#include <bits/stdc++.h>

using namespace std;

vector<int> findDisappearedNumbers(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    vector<int> temp(n+1, 0);
    vector<int> result = {};
    int i = 0;
    for (i = 0; i < n; i++)
    {
        temp[nums[i]] = 1;
    }
    for (int j = 1; j <= n; j++)
    {
        if (temp[j] == 0) result.push_back(j);
    }
    
    return result;
}

int main(int argc, char** argv)
{

    return 0;
}