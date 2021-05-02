#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mod = 10056;

#define sc scanf
#define pf printf
#define pb push_back
ll p[200002];
ll dp[1005][1005];

ll fnc(ll n)
{
    if(n <= 1)
        return 1;

    if(p[n] != 0)
        return p[n];
     static ll ans = 0;


    for(int i = 1; i <= n; ++i)
    {
        ans += (dp[n][i]%mod*fnc(n-i))%mod;
        ans = ans%mod;
    }

    return p[n] = ans;
}

int main()
{

    for(int i = 1; i <= 1000; ++i)
    {
        dp[i][1] = 1;
        dp[i][i] = 1;
    }

    for(int i = 3; i <= 1000; ++i)
    {
        for(int j = 2; j <= i; j++)
        {
            dp[i][j] = (dp[i-1][j] + dp[i-1][j-1])%mod;
        }

    }

    int n;
    cin>>n;
    for(int i = 1; i <= n; ++i)
    {
        ll x;
        sc("%lld", &x);
        cout<<fnc(x)<<endl;
    }

    return 0;
}
