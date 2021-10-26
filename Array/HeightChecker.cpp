#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int heightChecker(vector<int>& heights) {
    vector<int> expected = heights;
    sort(expected.begin(), expected.end());
    int cnt = 0;
    for (size_t i = 0; i < heights.size(); i++)
    {
        if(heights[i] != expected[i])
        {
            cnt++;
        }
    }
    
    return cnt;
}

int main (int argc, char** argv)
{
    int num = 0;
    vector<int> heights = {};
    while(cin >> num && !cin.eof()) {
        heights.push_back(num);
    }
    cout << heightChecker(heights);
    return 0;
}