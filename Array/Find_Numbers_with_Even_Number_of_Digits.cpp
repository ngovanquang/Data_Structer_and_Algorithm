#include <iostream>
#include <vector>

using namespace std;

bool isEvenDigits(int num) {
    int cnt = 0;
    while (num) {
        num /= 10;
        cnt++;
    }
    if (cnt % 2 == 0 && cnt != 0) {
        return true;
    }
    return false;
}

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int cnt = 0;
        for (int i : nums) {
            if (isEvenDigits(i))
            {
                cnt++;
            }
        }
        return cnt;
    }
};

int main (int argc, char ** argv)
{
    vector<int> numbers = {555,901,482,1771};
    Solution solution = Solution();
    int result = solution.findNumbers(numbers);
    cout << result << endl;
    return 0;
}