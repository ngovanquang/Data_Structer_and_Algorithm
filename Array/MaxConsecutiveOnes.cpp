#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0;
        int cnt = 0;
        
        for (int i: nums) {
            if (i == 1) {
                cnt++;
            }
            else {
                if (cnt > max) {
                    max = cnt;
                }
                cnt = 0;
            }
        }
        
        if (cnt > max) {
            max = cnt;
        }
        
        return max;
    }
};

int main(int argc, char** argv)
{
    int arr[] = {1,0,1,1,0,1};
    vector<int> arr1 = {1,0,1,1,0,1};
    int max = 0;
    int cnt = 0;
    int length = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i < length; i++)
    {
        if (arr[i] == 1) {
            cnt++;
        }
        if (arr[i] == 0 || i == (length - 1)) {
            if (cnt > max) {
                max =cnt;
            }
            cnt = 0;
        }
    }

    Solution result = Solution();
    int rt = result.findMaxConsecutiveOnes(arr1);
    cout << rt << endl;
    return 0;
}