#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        bool isSetContainsBitMask (vector<int>& a, vector<int>& b) {
            sort(a.begin(), a.end());
            sort(b.begin(), b.end());
            int alength = a.size();
            int blength = b.size();
            int currentIndex = 0;
            for (int i = 0; i < alength; i++) {
                if (currentIndex == blength - 1) return true;
                if (a[i] == b[currentIndex]) {
                    currentIndex++;
                } else {
                    if (a[i] < b[currentIndex]) {
                        continue;
                    } else {
                        return false;
                    }
                }
            }
            return false;
        }
};

int main(int argc, char ** argv)
{
    int n, m;
    cin >> n;
    int val;
    vector<int> a = {};
    vector<int> b = {};
    for (int i = 0; i < n; i++) {
        cin >> val;
        a.push_back(val);
    }
    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> val;
        b.push_back(val);
    }

    Solution solution = Solution();
    cout << solution.isSetContainsBitMask(a, b);

    return 0;
}