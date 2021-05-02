#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{

    ll n, k, x, y, gcd, mn, mp, mx;
    sc("%lld%lld%lld%lld", &n, &k, &x, &y);

    gcd = __gcd(x, y);

    x = x/gcd;
    y = y/gcd;

    mn = n/x;
    mp = k/y;

    mx = min(mn, mp);

    cout<<mx*x<<" "<<mx*y<<endl;

    return 0;
}
