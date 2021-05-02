#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll intt(ll n)
{
    ll i, p = float(sqrt(n));
    if(p*p == n && p != 1)
    {
        for(i = 2; i*i <= p; ++i)
        {
            if(p%i == 0)
                return 0;
        }
            return 1;
    }
    else
        return 0;

}

int main()
{
    ll n, m;
    cin>>n;

    for(ll i = 1; i <= n; ++i)
    {
        scanf("%lld", &m);
        if(intt(m))
           printf("YES\n");
        else
            printf("NO\n");
    }
    return 0;
}
