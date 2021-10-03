#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int first = m - 1;
        int second = n - 1;
        for (int i = m + n - 1; i >= 0; i--) {
            if (second < 0) break;

            if (first >= 0 && nums1[first] > nums2[second]) {
                nums1[i] = nums1[first];
                first--;
            }
            else {
                nums1[i] = nums2[second];
                second--;
            }
        }
        
    }
};

class Solution2 {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        m--;n--;
        int index = m+n-1;
        while(index < 0) {
            if (m < 0) {
                nums1[index] = nums2[n--];
            } else if (n < 0) {
                nums1[index] = nums1[m--];
            } else {
                if (nums1[m] > nums2[n]) {
                    nums1[index] = nums1[m--];
                }
                else {
                    nums1[index] = nums2[n--];
                }
            }
            index--;
        }
        
    }
};
int main (int argc, char** argv) {
    clock_t begin = clock();

    /* here, do your time-consuming job */
    vector<int> nums1 = {2,0};
    vector<int> nums2 = {1};
    Solution2 solution = Solution2();
    solution.merge(nums1, 1, nums2, 1);

    clock_t end = clock();
    double time_spent = (double)(end - begin)*1000000 / CLOCKS_PER_SEC;
    printf("Excution time: %f\n", time_spent);
    return 0;
}