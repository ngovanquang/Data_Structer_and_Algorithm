#include <bits/stdc++.h>

using namespace std;

typedef struct line
{
    int length;
    vector<int> nums;
} LINE;

LINE input()
{
    char* s;
    cin.getline(s, 200);
    LINE temp;
    temp.length = s[0];
    for (int i = 1; i < s[0]; i++)
    {
        temp.nums.push_back(s[i]);
    }
    return temp;
}

void maxAreaHistogram(vector<int>& heights)
{
    int length = heights.size();
    stack<int> s;
    
    int max_area = 0;
    int tp;
    int area_with_top;

    int i = 0;
    while (i < length)
    {
        if (s.empty() || heights[s.top()] <= heights[i])
            s.push(i++);
        else
        {
            tp = s.top();
            s.pop();
            area_with_top = heights[tp] * (s.empty() ? i : (i - s.top() - 1));
            if (max_area < area_with_top)
                max_area = area_with_top;
        }
    }
    
    while (s.empty() == false)
    {
        tp = s.top();
        s.pop();
        area_with_top = heights[tp] * (s.empty() ? i : (i - s.top() - 1));
        if (max_area < area_with_top)
            max_area = area_with_top;
    }

    cout << max_area << endl;
}

int main(int argc, char** argv)
{
    vector<LINE> data = {};
    LINE temp;
    int m = INT16_MIN, n;
    
    while (1)
    {
        cin >> m;
        if(m == 0) break;
        temp.length = m;
        for (int i = 0; i < m; i++)
        {
            cin >> n;
            temp.nums.push_back(n);
        }
        data.push_back(temp);
        temp.nums.clear();
    }
    
    for (int i = 0; i < data.size(); i++)
    {
        maxAreaHistogram(data[i].nums);
    }

    return 0;
}