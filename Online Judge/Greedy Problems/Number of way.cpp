#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    ll n, px = 0;
    sc("%lld", &n);
    vector<ll> ans;
    ans.pb(0);
    for(int i = 1; i <= n; ++i)
    {
        ll x;
        sc("%lld", &x);
        ///vec.pb(x);
        px += x;
        ans.pb(px);
    }
    ll pp = ans[n]/3;
    if(ans[n]%3 != 0 || n <= 2)
    {
        cout<<0<<endl;
        return 0;
    }
    if(pp == 0)
    {
       ll cnt = 0;
        for(int i = 1; i < n; ++i)
        {
            if(ans[i] == 0)
                cnt++;
        }
        cout<<cnt*(cnt-1)/2<<endl;
    }
    else
    {
        ll cnt1 = 0, an = 0;

        for(int i = 1; i < n; ++i)
        {
            if(ans[i] == (2*pp))
               an += cnt1;
            if(ans[i] == pp){
                cnt1++;
            }
        }

        cout<<an<<endl;
    }

    return 0;
}
