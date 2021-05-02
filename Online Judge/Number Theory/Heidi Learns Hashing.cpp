#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    ll n, p;
    sc("%lld", &n);
    n = n - 1;
    p = sqrt(n);

    for(int i = 1; i <= p; ++i)
    {
        if(n%i == 0)
        {
            ll px = n/i;
            px = px - (i+1);
            ///cout<<px<<endl;
            if(px%2 == 0 && px > 0)
            {
                cout<<i<<" "<<(px/2)<<endl;
                return 0;
            }
        }

    }

    cout<<"NO"<<endl;

    return 0;
}
