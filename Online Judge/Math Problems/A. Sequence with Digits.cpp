#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int mnx(ll nm)
{
    vector<int> vec;
    while(nm > 0)
    {
        int px = nm%10;
        nm /= 10;
        vec.pb(px);
    }
    sort(vec.begin(), vec.end());
    int indx = vec.size()-1;
    ll ans = vec[0]*vec[indx];

    return ans;
}

int main()
{
    int ts;
    cin>>ts;
    while(ts--)
    {
        ll nm, nk, ans;
        sc("%lld%lld", &nm, &nk);

        ans = nm;
        for(int i = 1; i < nk; ++i)
        {
            if(mnx(ans) == 0)
                break;
            ans += mnx(ans);
        }

        cout<<ans<<endl;
    }

    return 0;
}
