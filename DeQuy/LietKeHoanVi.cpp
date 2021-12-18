#include<bits/stdc++.h>
using namespace std;

int a[10] = {0};
int d[10] = {0};
int n;
void Try(int k)
{
    int i;
    for (i = 1; i <= n; i++)
    {
        if (!d[i]) {
            a[k] = i;
            d[i] = 1;
            if (k == n) {
                int j;
                for (j = 1; j <= n; ++j)
                {
                    cout << a[j] << " ";
                }
                cout << '\n';
            }
            else Try(k+1);
            d[i] = 0;
        }
    }
}

int main(int argc, char**argv)
{
    cin >> n;
    Try (1);
    return 0;
}