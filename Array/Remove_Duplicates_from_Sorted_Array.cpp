#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int length = nums.size();
        if (length == 0) return 0;
        int cnt = 0;
        int temp = nums[0];
        for (int i = 1; i < length; i++){
            if (nums[i] == temp) {
                cnt++;
            } else {
                if (cnt != 0) {
                    for (int j = i; j < length; j++){
                        nums[j-cnt] = nums[j];
                    }
                    length = length - cnt;
                    i = i - cnt;
                    temp = nums[i];
                    cnt = 0;
                }
                else {
                    temp = nums[i];
                }
            }
        }
        if (cnt > 0) {
            length = length -cnt;
        }
        return length;
    }

    int removeDuplicates2(vector<int>& nums) {
        int currentIndex = 0;
        int length = nums.size();
        for (int i = 0; i < length; i++) {

            if (nums[i] != nums[currentIndex]) {
                currentIndex++;
                nums[currentIndex] = nums[i];
            }
        }

        return currentIndex + 1;
    }
};

int main(int argc, char ** argv)
{
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4,4};
    Solution solution = Solution();
    int length = solution.removeDuplicates2(nums);
    cout << "length: " << length << endl;
    for (int i = 0; i < length; i++){
        cout << nums[i];
        if (i != length - 1) cout << " ";
    }
    cout << endl;
    return 0;
}