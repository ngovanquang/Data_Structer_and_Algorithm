#include<bits/stdc++.h>
using namespace std;

int m, n, k;
int a [10] = {0};

void Try (int k)
{
    int i;
    for (i = a[k - 1] + 1; i <= n - m + k;++i)
    {
        a[k] = i;
        if (k == m) {
            int j;
            for (j = 1; j <= m; ++j)
            {
                cout << a[j] << " ";
            }
            cout << '\n';
        }
        else Try(k + 1);
    }
}

int main(int argc, char** argv)
{
    cin >> m >> n;
    Try(1);
    return 0;
}