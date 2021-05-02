#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        sc("%d", &n);
        vector<ll> vec1, vec2;

        for(int i = 1; i <= n; ++i)
        {
            ll x, y;
            sc("%lld%lld", &x, &y);
            vec1.pb(x);
            vec2.pb(y);
        }
        if(n == 1)
        {
            cout<<0<<endl;
            continue;
        }

        sort(vec1.begin(), vec1.end(), greater<ll>());
        sort(vec2.begin(), vec2.end());

        ll ans = vec1[0]-vec2[0];
        if(ans > 0)
            cout<<ans<<endl;
        else
            cout<<0<<endl;
    }

    return 0;
}
