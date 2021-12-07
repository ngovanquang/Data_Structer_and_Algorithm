#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int calMaxOfSubSeq(vector<int> &nums)
    {
        int length = nums.size();
        if (length == 0)
            return 0;
        vector<int> temp = {};
        if (length == 1)
        {
            temp.push_back(nums[0]);
        }
        else
        {
            // Gop cac so duong so am vs nhau roi push vao 1 vector moi
            int sum = 0;
            for (int i = 0; i < length - 1; i++)
            {
                if ((nums[i] < 0 && nums[i + 1] <= 0) || (nums[i] >= 0 && nums[i + 1] > 0) || (nums[i] > 0 && nums[i + 1] >= 0) || (nums[i] <= 0 && nums[i + 1] < 0))
                {
                    sum += nums[i];
                }
                else if ((nums[i] < 0 && nums[i + 1] > 0) || (nums[i] > 0 && nums[i + 1] < 0))
                {
                    sum += nums[i];
                    temp.push_back(sum);
                    sum = 0;
                }
            }
            sum += nums[length - 1];
            temp.push_back(sum);
        }

        int tempLength = temp.size();
        // tim so duong dau tien cua vector
        int currentIndex = 0;
        for (int i = 0; i < tempLength; i++)
        {
            if (temp[i] < 0)
                currentIndex++;
            if (temp[i] > 0)
                break;
        }
        // tim MAx cua sub array
        int MAX = temp[currentIndex];
        int SUM = MAX;
        if (currentIndex == (tempLength - 1)) return MAX;
        for (int i = currentIndex + 1; i < tempLength; i++)
        {
            SUM += temp[i];
            if (SUM < 0)
                SUM = 0;
            else if (SUM > MAX)
                MAX = SUM;
        }
        return MAX;
    }
public:
    int calMaxOfSubSeq2(vector<int> &nums){
        vector<int>f = {0};
        int res = INT16_MIN;
        for (int i = 1; i <= nums.size(); i++)
        {
            f[i] = max(nums[i], nums[i] + f[i - 1]);
            res = max(res, f[i]);
        }
        
        return res;
    }
};

int main(int argc, char **argv)
{
    int n;
    scanf("%d", &n);
    int value;
    vector<int> array = {};
    for (size_t i = 0; i < n; i++)
    {
        cin >> value;
        array.push_back(value);
    }

    Solution solution = Solution();
    cout << solution.calMaxOfSubSeq(array) << endl;

    return 0;
}