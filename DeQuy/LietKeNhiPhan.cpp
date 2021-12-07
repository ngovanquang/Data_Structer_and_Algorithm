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
            for (int j = 0; j < n; j++)
            {
                cout << a[j] << "\t";
            }
            
        }
        else Try (k + 1);
        cout << endl;
    }
}

int main (int argc, char** argv)
{
    
    cin >> n;
    Try(0);
    return 0;
}