#include <bits/stdc++.h>

using namespace std;

int duyet(int X, int p)
{
    if(__builtin_popcount(X) == n) return c[p][0];
    if(save[X][p] != -1) return save[X][p];
    int ans = 2e9;
    for (int s = 0; s < n; ++s)
        if ((X >> s & 1) == 0) {
            ans = min(ans, c[p][s]) + duyet(1 << s | X, s));
        }
}

int main(int argc, char** argv)
{

    return 0;
}