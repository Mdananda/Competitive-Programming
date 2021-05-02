#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9+7;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    ll n, p, g = 0;
    cin>>n;
    p = int(sqrt(n));

    for(ll i = 2; i <= p; ++i)
    {
        if(n%i == 0)
        {
            g = __gcd(g, i);
            ///cout<<g<<endl;
            g = __gcd(g, n/i);
            cout<<g<<endl;
        }
    }
    if(g == 0)
        g = n;
    cout<<g<<endl;


    return 0;
}

