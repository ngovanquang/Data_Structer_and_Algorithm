#include <bits/stdc++.h>

using namespace std;

int n = 0;
int a[10] = {0};

void Try (int k)
{
    
    int i;
    for (i = 0; i <= 1; i++)
    {
        a[k] = i;
        if (k == n) {
            for (int j = 1; j <= n; j++)
            {
                cout << a[j] << " ";
            }
            cout << '\n';
        }
        else Try (k + 1);
    }
}

int main (int argc, char** argv)
{
    
    cin >> n;
    Try(1);
    return 0;
}