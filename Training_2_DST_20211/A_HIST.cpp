#include <bits/stdc++.h>

using namespace std;

typedef struct line
{
    int length;
    vector<int> nums;
} LINE;

void maxAreaHistogram(vector<int>& heights)
{
    int length = heights.size();
    vector<int> left(length), right(length);
    stack<int> mystack;
    for (int i = 0; i < length; ++i)
    {
        if(mystack.empty())
        {
            left[i] = 0;
            mystack.push(i);
        }
        else
        {
            while (!mystack.empty() && heights[mystack.top()] >= heights[i])
            {
                mystack.pop();
            }
            left[i] = mystack.empty()?0:mystack.top()+1;
            mystack.push(i);
            
        }
    }
    
    while (!mystack.empty())
    {
        mystack.pop();
    }
    

    for (int i = length-1; i >= 0; i--)
    {
        if(mystack.empty())
        {
            right[i] = length - 1;
            mystack.push(i);
        }
        else
        {
            while (!mystack.empty() && heights[mystack.top()] >= heights[i])
            {
                mystack.pop();
            }
            right[i] = mystack.empty()?(length-1):(mystack.top() - 1);
            mystack.push(i);
        }
    }
    unsigned long long mx_area = 0;
    for (int i = 0; i < length; i++)
    {
        mx_area = max(mx_area, (unsigned long long)heights[i]*(right[i]-left[i]+1));
    }
    cout << mx_area << endl;
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