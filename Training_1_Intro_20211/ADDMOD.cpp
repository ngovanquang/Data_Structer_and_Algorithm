#include <bits/stdc++.h>

using namespace std;

#define SO_MOD 1000000007

class Solution {
    public:
        void process () {
            unsigned long long a, b, moda, modb, result;
            cin >> a;
            cin >> b;
            moda = a % SO_MOD;
            modb = b % SO_MOD;
            if ((moda + modb) >= SO_MOD) {
                result = (moda + modb) % SO_MOD;
            } else {
                result = moda + modb;
            }
            cout << result << endl;
        }
};

int main(int argc, char ** argv)
{
    Solution solution = Solution();
    solution.process();
    return 0;
}