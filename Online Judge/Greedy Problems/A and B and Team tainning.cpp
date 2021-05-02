#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e7+9;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    ll n, k, mn, mx, mnp, mxp, cnt = 0;
    sc("%lld%lld", &n, &k);


        while(1)
        {
            mn = min(n, k);
            mx = max(n, k);
            if(mx > 1 && mn > 0)
            {
                n = mx-2;
                k = mn-1;
                cnt++;
            }
            else
                break;
        }

    cout<<cnt<<endl;

    return 0;
}
