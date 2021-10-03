#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        for (int i = 0; i < arr.size(); ++i) {
            if (arr[i] == 0) {
                for (int j = arr.size() - 1; j > i; --j) {
                    arr[j] = arr[j - 1];
                }
                i = i+1;
            }
            
        }
    }
};

int main (int argc, char ** argv)
{
    vector<int> nums = {1,0,2,3,0,4,5,0};
    Solution solution = Solution();
    solution.duplicateZeros(nums);
    for (int i : nums) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}