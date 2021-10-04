#include <bits/stdc++.h>

using namespace std;

class Solution {
    public:
        void input(vector<string>& input) {
            int num;
            cin >> num;
            string s;
            getline(cin, s);
            for (int i = 0; i < num; i++) {
                getline(cin, s);
                input.push_back(s);
            }
        }

        void processString(vector<string>& input) {
            int length = input.size();
            int strLen = 0;
            for (int i = 0; i < length; i++) {
                strLen = size(input[i]);
                if (strLen > 10) {
                    string num = to_string(strLen - 2);
                    string temp = input[i][0] + (num) + input[i][strLen-1];
                    input[i] = temp;
                }
            }
        }

        void output(vector<string>& output) {
            int length = output.size();
            for (string temp : output) {
                cout << temp << endl;
            }
        }

};

int main(int argc, char ** argv)
{
    vector<string> input;
    Solution solution = Solution();
    solution.input(input);
    solution.processString(input);
    solution.output(input);
    return 0;
}