#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    vector<int> vec;
    int n;
    cin>>n;
    bool flg = true;

    ll ans, gcd, lcm;
    ans = lcm = gcd = 1;

    for(int i = 1; i <= n; ++i)
    {
        ll x;
        sc("%lld", &x);
        vec.pb(x);
        ans = ans*x;
        gcd = __gcd(gcd, x);
        lcm = ans/gcd;
        ans = lcm;
        gcd = lcm;
    }

    cout<<lcm<<endl;

    for(int i = 0; i < n; ++i)
    {
        ans = lcm/vec[i];
        if(ans%2 == 0 || ans%3 == 0 || ans == 1)
        {
            flg = true;
        }
        else
        {
            flg = false;
            break;
        }
        cout<<ans<<endl;
    }

    if(flg == true)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

 ///   cout<<ans<<endl;

        return 0;
}
