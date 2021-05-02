#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf printf
#define pb push_back
#define ff first
#define ss second

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        sc("%d", &n);

        vector< pair <ll,ll> > p;

        for(int i = 1; i <= n; ++i)
        {
            ll a, b;
            sc("%lld%lld", &a, &b);
            p.pb(make_pair(a, b));
        }

        ll cnt = 0, cur;
        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                if(j == i || j == cur)
                    continue;
                if(p[j].ff >= p[i].ff && p[j].ff <= p[i].ss)
                {
                    cnt++;
                    cur = i;
                    ///cout<<cur<<endl;
                    break;
                }
                else if(p[j].ss >= p[i].ff && p[j].ss <= p[i].ss)
                {
                    cnt++;
                    cur = i;
                   /// cout<<cur<<endl;
                    break;
                }
            }
        }

        cout<<cnt<<endl;
    }



    return 0;
}
