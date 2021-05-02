#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9+7;

#define sc scanf
#define pf printf
#define pb push_back

vector <int> prm;

void seive(ll n)
{
    vector<int>isprime(n+10, 0);
    ///vector <int> prm;
    for(int i = 2; i <= n; i++)
    {
        if(isprime[i])
            continue;
        for(int j = i*i; j <= n; j += i)
        {
            isprime[j] = 1;
        }
        prm.pb(i);
    }
}

ll divcnt(ll n)
{
    prm.clear();
    seive(n);
    ll rst = 1;

    for(int i = 0; i < prm.size(); ++i)
    {
        ll p = prm[i];
        ll exp = 0;

        while(p <= n)
        {
            exp += (n/p);
            p = p*prm[i];
        }
        rst = rst*(exp+1);
        rst = rst % mod;
    }

    return (rst%mod);
}

int main()
{
    int t;
    sc("%d", &t);
    ///seive();
    while(t--)
    {
        ll n;
        sc("%lld", &n);
        pf("%lld\n", divcnt(n));
    }

    return 0;
}
