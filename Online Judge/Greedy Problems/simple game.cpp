#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    ll n, k, up, dn;
    sc("%lld%lld", &n, &k);
    if(n == 1)
    {
        cout<<n<<endl;
        return 0;
    }
    up = n-k;
    dn = k-1;
    if(up > dn)
        cout<<k+1<<endl;
    else
        cout<<k-1<<endl;

    return 0;
}
