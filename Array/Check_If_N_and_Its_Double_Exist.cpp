#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        int length = arr.size();
        for (int i = 0; i < length-1; i++) {
            for (int j = i+1; j < length; j++) {
                if ((arr[i]*2 == arr[j]) || (arr[i]/2 == arr[j] && arr[i]%2 == 0)) return true;
            }
        }
        return false;
    }
};

int main (int argc, char** argv)
{
    vector<int> arr = {10,2,5,3};
    Solution solution = Solution();
    cout << solution.checkIfExist(arr) << endl;
    return 0;
}