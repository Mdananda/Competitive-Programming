#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

map<ll, ll> mp, ck;

int main()
{
    ll x;
    vector<ll> vc;

    while(sc("%lld", &x) != EOF)
    {
        if(ck[x] != 1)
        {
            vc.pb(x);
            ck[x] = 1;
            mp[x]++;
        }
        else
            mp[x]++;
    }

    for(int i = 0; i < vc.size(); ++i)
    {
        int tmp = vc[i];
        pf("%lld %lld\n", vc[i], mp[tmp]);
    }

    return 0;
}
