#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e7+9;

#define sc scanf
#define pf printf
#define pb push_back

int x[10010], y[10010];

int main()
{
    ll n , k;
    sc("%lld%lld", &n, &k);
    ll a, b;
    sc("%lld%lld", &a, &b);
    int num;
    sc("%d", &num);
    for(int i = 1; i <= num; ++i)
        sc("%d%d", &x[i], &y[i]);

    ll p, q, ns, ks, ans = 0;
    ns = n-a;
    ks = k-b;

    for(int i = 1; i <= num; ++i)
    {
        if(x[i] > 0 && y > 0){
            p = ns/x[i];
            q = ks/y[i];
            a = a+x[i]*min(p, q);
            b = b+y[i]*min(p, q);
            ans += min(p, q);
        }
        else if(x[i] < 0 && y < 0)
        {

        }
    }







    return 0;
}
