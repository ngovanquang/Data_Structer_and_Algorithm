#include <bits/stdc++.h>

using namespace std;
#define MAX 30

int N, K, S;
int curIndex = 0;
int cost = 0;
int a[MAX];
int res = 0;
bool b[MAX] = {0};
int p[MAX];

void result() {
    for (int i = 1; i <= K; i++)
    {
        cost += a[p[i]];
        if (cost > S)
        {
            cost = 0;
            break;
        } 
        else if (cost == S)
        {
            res++;
            cost = 0;
        } 
    }
}

void Try(int i)
      {
            int j;
            for(j=1;j<=N;j++)
            if(b[j])
               {
                    p[i]=j;
                    b[j]=0;
            if(i==K) result ();
            else Try(i+1);
                    b[j]=1;
                 }
      }

void ToHop (int i)  {
    for (int j = p[i-1] + 1; j <= N-K+i; j++)  {
        p[i] = j;
        if (i == K)
            result();
        else
            ToHop(i+1);
    }
}


int main(int argc, char** argv)
{
    cin >> N >> K >> S;
    p[0] = 0;
    for (int i = 0; i < N; i++){
        cin >> a[i];
    }
    for (int i = 0; i <= N; i++)
    {
        b[i] = 1;
    }
    ToHop(1);
    
    cout << (res - K) << endl;
    return 0;
}