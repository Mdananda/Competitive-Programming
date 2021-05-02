#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
///ll n = 1e7+7;

map <int, int>mp;
map <int, int>:: iterator it;
void seive(ll p, ll n)
{
   /// ll mx = 0;
    for(ll i = 2; i <= p; ++i)
    {
        ll ans, cnt = 0, k = 1;
        ans = (p/i);
        cnt = ans - k;
        for(ll j = i+i; j <= p; j += i)
        {
            k++;
            cnt += (ans -((p/j)-1)-(k));
        }
        if(cnt >= n){
            mp[i] = cnt;
            //mx = cnt;
        }
    }
}


int main()
{
    ll T;
    cin>>T;
    for(ll i = 1; i <= T; ++i)
    {
        ll n, p;
        cin>>n>>p;
        seive(n, p);
        if(mp.size() == 0)
        {
            printf("Case %d: -1\n", i);
        }
        else
        {
            it = mp.end();
            it--;
            printf("Case %lld: %d\n", i, it->first);
            ///cout<<mp[150]<<endl;
        }

        mp.clear();
    }





    return 0;
}
