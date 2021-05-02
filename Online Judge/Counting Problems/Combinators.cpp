#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll mod = 1000003;

#define sc scanf
#define pf printf
#define pb push_back

ll fct[1000009], invfct[1000009];

ll BigMod(ll n, ll k)
{
    if(k == 0)
        return 1;
    ll r = BigMod(n, k/2);
    r = ((r%mod)*(r%mod))%mod;
    if(k%2 == 1)
        r = ((r%mod)*(n%mod))%mod;
    return r;
}

ll ans(ll n, ll k)
{
    ll p = fct[n];
    p = (p*invfct[k]);
    p = (p%mod*invfct[n-k])%mod;

    if(p == 0)
        p = 1;
    return p;
}

int main()
{

    fct[0] = 1;

    for(int i = 1; i <= 1000002; ++i)
        fct[i] = (fct[i-1]*i)%mod;

    for(int i = 1; i <= 1000002; ++i)
    {
        invfct[i] = BigMod(fct[i], mod-2);
    }



    int t;
    cin>>t;
    for(int i = 1; i <= t; ++i)
    {
        ll n, k;
        sc("%lld%lld", &n, &k);
        pf("Case %d: %lld\n", i, ans(n, k));
    }

    return 0;
}
