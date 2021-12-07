#include <bits/stdc++.h>

using namespace std;
unsigned long long L, R, result;

int main(int argc, char** argv)
{
    cin >> L >> R;
    if (L % 2 == 0)
    {
        if (R % 2 == 0)
        {
             result = (R - L) / 2 + 1;
             cout << result;
        }
        else {
            result = (R + 1 - L) / 2;
            cout << result;
        }
    } else {
        if (R % 2 == 0)
        {
            result = (R - L) / 2 + 1;
            cout << result;
        }
        else {
            result = (R - L) / 2;
            cout << result;
        }
    }
    return 0;
}