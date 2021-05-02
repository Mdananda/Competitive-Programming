#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e7+9;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int n;
    sc("%lld", &n);
    vector<ll>vec;
    vector<ll>:: iterator it;

    for(int i = 1; i <= n; ++i)
    {
        ll x;
        sc("%lld", &x);
        vec.pb(x);
    }
    sort(vec.begin(), vec.end());
    ll cnt = 0, num= 0;

    for(int i = 0; i < n; ++i)
    {
        if(vec[i] >= num)
        {
            num += vec[i];
           /// cout<<num<<endl;
            cnt++;
        }

    }

    cout<<cnt<<endl;


    return 0;
}
