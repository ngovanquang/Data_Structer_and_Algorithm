#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> pii;

int n, k;
unsigned long long calcSegment(vector<pii>& a, unsigned int length)
{
    unsigned long long result = 0;
    unsigned int curr = 0;
    for (int i = 0; i < length; i++)
    {
        if(curr >= a[i].second)
            // Du so de phat
            curr -= a[i].second;
        else
        {
            // khong du so de phat
            a[i].second -= curr;
            int times = (a[i].second - 1) / k + 1;
            result += 2ll * abs(a[i].first) * times;
            curr = times * k - a[i].second;
        }
    }
    return result;
}

int main()
{
    cin >> n >> k;
    pii line;
    vector<pii> neg;
    vector<pii> pos;
    for (int i = 0; i < n;++i)
    {
        cin >> line.first >> line.second;
        if (line.first >= 0)
            pos.push_back(line);
        else
            neg.push_back(line);
    }
    sort(neg.begin(), neg.end());
    sort(pos.begin(), pos.end(), greater<pii>());
    unsigned long long value = 0;
    unsigned int neg_length = neg.size();
    unsigned int pos_length = pos.size();
    value += calcSegment(neg, neg_length);
    value += calcSegment(pos, pos_length);
    cout << value << endl;
    return 0;
}