#include <bits/stdc++.h>

#define MAX 100

using namespace std;
int n;
int c[MAX][MAX];

int calc(int a[])
{
    int a1, a2, a3 = 0;
    for (int i = 1; i <= n; ++i)
    {
        a1 += c[a[i]][a[i]+n];
    }
    for (int i = 1; i < n; ++i)
    {
        a2 += c[a[i] + n][a[i]+1];
    }
    a3 = c[a[n] + n][0];
    return a1 + a2 + a3;
}

int main(int argc, char** argv)
{
    cin >> n;
    // initialize
    for (int i = 0; i < 2*n; i++)
        for (int j = 0; j < 2*n; j++)
            cin >> c[i][j];
    int cost = 0;
    int answer = INFINITY;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        a[i] = i++;
    }
    
    while (1)
    {
        cost = calc(a);
        answer = min(answer, cost);
        if (a == {n, n - 1, })
    }
    
    next_permutation(a[0], a[n-1]);
    return 0;
}