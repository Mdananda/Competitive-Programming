#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

ll nm, np;
vector<ll> vec;

int fnc(ll md)
{
    ll i, sz, cur = 1, ans = 0;
    sz = vec.size();
    for(i = 0; i < sz; ++i)
        if(vec[i]> md)
            return 0;
    for(i = 0; i < sz; ++i)
    {
        if(ans+vec[i] <= md)
            ans += vec[i];
        else
        {
            ans = vec[i];
            cur++;
        }
    }
    if(cur <= np)
        return 1;
    else
        return 0;
}


int main()
{
    int ts;
    cin>> ts;

    for(int k = 1; k <= ts; ++k)
    {
        sc("%lld%lld", &nm, &np);
        for(int i = 1; i <= nm; ++i)
        {
            int x;
            sc("%d", &x);
            vec.pb(x);
        }

        ll lo = 0, hi = 2e9;
        while((hi-lo) > 1)
        {
            ll md = (lo+hi)/2;
            if(fnc(md))
                hi = md;
            else
                lo = md+1;
        }

        if(fnc(lo))
            pf("Case %d: %lld\n", k, lo);
        else
            pf("Case %d: %lld\n", k, hi);
        vec.clear();
    }


    return 0;
}
