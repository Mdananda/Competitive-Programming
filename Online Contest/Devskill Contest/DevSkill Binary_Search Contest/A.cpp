#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int fnc(ll md, ll nm)
{
    ll tmp = (md+1)*md/2;
    if(tmp > nm)
        return 0;
    else
        return 1;
}

int main()
{
    ll ts;
    cin>>ts;

    while(ts--)
    {
        ll nm;
        sc("%lld", &nm);

        ll lo = 0, hi = 2e9;
        while((hi-lo) > 1)
        {
            ll md = (lo+hi)/2;
            if(fnc(md, nm))
                lo = md;
            else
                hi = md-1;
        }

        if(fnc(hi, nm))
            cout<<hi<<endl;
        else
            cout<<lo<<endl;
    }

    return 0;
}

