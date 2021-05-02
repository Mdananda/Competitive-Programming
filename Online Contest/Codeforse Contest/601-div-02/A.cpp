#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf prinf
#define pb push_back

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll a, b, d, ans = 0;
        sc("%lld%lld", &a, &b);
        d = abs(a-b);
        ans += (d/5);
        d = d%5;
        ///cout<<d<<endl;
        ans += (d/2);
        d = d%2;
        ans += d;

        cout<<ans<<endl;
    }

    return 0;
}
