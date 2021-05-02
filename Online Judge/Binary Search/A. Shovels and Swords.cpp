#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

bool fnc(ll md, ll nm,ll np)
{
    if(md == 0)
        return true;
    ll tmp = (nm+np)/md;
    ll mn = min(nm, np);
    if(tmp >= 3 && md <= mn)
        return true;
    else if(tmp >= 3 && md <= mn)
        return true;
    else
        return false;
}

int main()
{
    int ts;
    cin>>ts;
    while(ts--)
    {
        ll nm, np;
        sc("%lld%lld", &nm, &np);
        ll lo = 0, hi = max(nm, np)+10;

        while((hi-lo) > 1)
        {
            ll md = (lo+hi)/2;
            bool tmp = fnc(md, nm, np);
            if(tmp == true)
                lo = md;
            else
                hi = md-1;
        }

        if(fnc(hi, nm, np) == true)
            cout<<hi<<endl;
        else
            cout<<lo<<endl;
    }

    return 0;
}
