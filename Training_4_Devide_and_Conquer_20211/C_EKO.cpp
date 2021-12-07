#include <bits/stdc++.h>

using namespace std;
long long n, m, x, MaxAi;
vector<int> a;
int findMax(vector<int>& array)
{
    int max = INT_MIN;
    for (int i = 0; i < array.size(); i++)
    {
        if(array[i] > max){
            max = array[i];
        }
    }
    return max;
}
bool check (long long h)
{
    int S = 0;
    for (int i = 1; i <= n; ++i)
    {
        if(a[i] > h) S += a[i] - h;
        //else S += a[i];
    }
    if (S > m) return true;
    return false;
}

int cnp()
{
    int l = 0, r = MaxAi, mid, res = 0;
    while (l <= r)
    {
        mid = (l+r) / 2;
        if (check(mid))
        {
            l = mid + 1;
            res = mid;
        }
        else r = mid - 1;
    }
    return res;
}

int main(int argc, char** argv)
{
    
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        a.push_back(x);
    }
    MaxAi = findMax(a);
    cout << cnp() << endl;
    return 0;
}