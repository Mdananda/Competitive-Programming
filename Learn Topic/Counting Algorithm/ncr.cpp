#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9+7;
int ncr[100][100];

int nCr(int n)
{
    ncr[0][0] = 1;

    for(int i = 1; i <= n; ++i)
    {
        ncr[i][0] = 1;
        ncr[i][1] = i;
    }

    for(int i = 2; i <= n; ++i)
    {
        for(int j = 2; j <= n; ++j)
        {
            ncr[i][j] = (ncr[i-1][j] + ncr[i-1][j-1])%mod;
        }
    }

}

int main()
{
    nCr(20);

    for(int i = 0; i <= 10; i++)
    {
        for(int j = 0; j <= i; j++)
            cout<<ncr[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}
