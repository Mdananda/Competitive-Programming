#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    ll n, m, mn, mx, tmp, ans = 0;
    sc("%lld%lld", &n, &m);

    mn = min(n, m);
    mx = max(n, m);

    for(int i = 1; i <= mn; ++i)
    {
        tmp = (mx+i)/5;
        ans += (tmp- (i/5));
    }

    cout<<ans<<endl;

    return 0;
}
