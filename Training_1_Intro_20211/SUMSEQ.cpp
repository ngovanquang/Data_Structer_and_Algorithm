#include <bits/stdc++.h>

using namespace std;

#define SO_MOD 1000000007

class Solution {
    public:
        void input(vector<int>& nums) {
            int n, temp;
            cin >> n;
            for (int i = 0; i < n; i++) {
                cin >> temp;
                nums.push_back(temp);
            }
        }
        void process(vector<int>& nums) {
            unsigned long long S = 0;
            for(int i : nums) {
                S += i;
            }
            cout << (S % SO_MOD) << endl;
        }
};

int main(int argc, char ** argv) 
{
    vector<int> input;
    
    Solution solution = Solution();
    solution.input(input);
    solution.process(input);

    return 0;
}