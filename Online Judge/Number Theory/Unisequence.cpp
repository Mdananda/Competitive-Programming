#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    ll i, j, n, cnt = 0, ans = 0;
    sc("%lld", &n);
    vector<int> vec;
    map <ll, ll> mp;

    for(int i = 1; i <= n; ++i)
    {
        ll x;
        sc("%lld", &x);
        vec.pb(x);
    }

    for(int i = 0; i < n; ++i)
    {
        mp[vec[i]]++;
        if(mp[x] == 2)
            break;
    }
    if(i == n)
    {
        cout<<"0"<<endl;
        return 0;
    }

    for(j = n-1; j >= 0; j--)
    {
        mp[vec[j]]++;
        if(mp[vec[j]] == 2)
            break;
    }


    return 0;
}
