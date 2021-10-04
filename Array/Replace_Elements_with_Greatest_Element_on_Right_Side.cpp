#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int length = arr.size();
        int max = INT_MIN;
        for (int i = 0; i < length - 1; i++){
            max= arr[i+1];
            for (int j = i + 1; j < length; j++){
                if (arr[j] > max) max= arr[j];
            }
            arr[i] = max;
        }
        arr[length-1] = -1;
        return arr;
    }

    vector<int> replaceElements2(vector<int>& arr) {
        int length = arr.size();
        for (int i = length - 2; i >= 0; i--) {
            arr[i] = max(arr[i], arr[i + 1]);
        }
        for (int i = 0; i < length - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[length - 1] = -1;
        return arr;
    }
};

int main(int argc, char ** argv)
{
    vector<int> arr = {17,18,5,4,6,1};
    Solution solution = Solution();
    solution.replaceElements2(arr);
    for (int i : arr){
        cout << i;
        if (i != arr.size() - 1) cout << " ";
    }
    cout << endl;
    return 0;
}