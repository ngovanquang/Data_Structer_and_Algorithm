#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
       int length = arr.size();
       if (length <= 2) return false;
       int pivot = 0;
       for (int i = 0; i < length-2; i++) {
           if (arr[i] < arr[i+1] && arr[i+1] < arr[i+2]) {
               pivot = i + 2;
           } else if (arr[i] < arr[i+1] && arr[i+1] > arr[i+2]) {
               pivot = i + 1;
           } else if (arr[i] > arr[i+1] && arr[i+1] > arr[i+2]) {
               if (pivot == 0) return false;
           } else return false;
           
           // Truong hop mang chi tang
           if ( pivot == (length - 1))
               return false;
       }
        return true;
    }
};

int main(int argc, char ** argv)
{
    vector<int> arr = {0,1,2,1,2};
    Solution solution = Solution();
    cout << solution.validMountainArray(arr) << endl;
    return 0;
}