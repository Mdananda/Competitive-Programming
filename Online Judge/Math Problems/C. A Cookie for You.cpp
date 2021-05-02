#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    ll T, tmp;
    cin>>T;

    while(T--)
    {
        ll a, b, n, m;
        sc("%lld%lld%lld%lld", &a, &b, &n, &m);
        if((a+b) < (n+m))
            cout<<"No"<<endl;
        else
        {
            if(a == 0 && n == 0 && b > a && m != 0)
                cout<<"No"<<endl;
            else
                cout<<"Yes"<<endl;
        }
    }

    return 0;
}
