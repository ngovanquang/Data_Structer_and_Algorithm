#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
       int length = arr.size();
       if (length <= 2) return false;
       bool isTang = false;
       bool isGiam = false;
       bool isDinh = false;
       int pivot = 0;
       for (int i = 0; i < length-2; i++) {
           if (arr[i] < arr[i+1] && arr[i+1] < arr[i+2]) {
               isTang = true;
               isGiam = false;
               isDinh = false;
           } else if (arr[i] < arr[i+1] && arr[i+1] > arr[i+2]) {
               isTang = false;
               isGiam = false;
               isDinh = true;
           } else if (arr[i] > arr[i+1] && arr[i+1] > arr[i+2]) {
               isTang = false;
               isGiam = true;
               isDinh = false;
           } else return false;

           if (isTang) pivot = i+2;
           else if (isDinh) pivot = i+1;
           
           // Truong hop mang chi tang hoac giam
           if (pivot == 0 || pivot == (length - 1))
               return false;
       }
        return true;
    }
};

int main(int argc, char ** argv)
{
    vector<int> arr = {0,3,2,1};
    Solution solution = Solution();
    cout << solution.validMountainArray(arr) << endl;
    return 0;
}