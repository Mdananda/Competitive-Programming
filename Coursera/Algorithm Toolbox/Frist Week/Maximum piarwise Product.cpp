#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    vector<ll> vc;
    ll nm, ans;
    sc("%lld", &nm);

    for(int i = 1; i <= nm; ++i)
    {
        ll xx;
        sc("%lld", &xx);
        vc.pb(xx);
    }

    sort(vc.begin(), vc.end(), greater<ll>());
    if(nm >= 2)
    {
        ans = vc[0]*vc[1];
        cout<<ans<<endl;
    }
    else
        cout<<vc[0]<<endl;

    return 0;
}
