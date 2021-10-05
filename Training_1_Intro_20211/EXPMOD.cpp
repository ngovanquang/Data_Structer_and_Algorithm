#include <bits/stdc++.h>

using namespace std;

#define SO_MOD 1000000007

void solution() {
    unsigned long long a, b, result, moda;
    cin >> a >> b;
    moda = a % SO_MOD;
    result = pow(moda, b);
    if (result > SO_MOD) {
        result = result % SO_MOD;
    }
    cout << result << endl;
}

int main(int argc, char ** argv)
{
    solution();
    return 0;
}