#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int vc[30010], tmp[100000];
vector<ll> ans;

void init(int nd, int st, int ed)
{
    if(st==ed)
    {
        tmp[nd] = vc[st];
        return;
    }
    int md = (st+ed)/2;
    int lf = 2*nd, rg = 2*nd+1;
    init(lf, st, md);
    init(rg, md+1, ed);
    tmp[nd] = min(tmp[lf],tmp[rg]);
}

void query(int nd, int st, int ed)
{
    if(st == ed)
    {
        ans.pb(tmp[nd]);
        return;
    }
//    int sz = (ed-st)+1;
//    ans.pb(tmp[nd]*sz);
    int md = (st+ed)/2;
    int lf = 2*nd, rg = 2*nd+1;
    query(lf, st, md);
    query(rg, md+1, ed);
    ll sz = (ed-st)+1;
    ll px = (ll)tmp[nd]*sz;
    ans.pb(px);
}

int main()
{
    int T, nm;
    sc("%d", &T);
    for(int tc = 1; tc <= T; ++tc)
    {
        sc("%d", &nm);
        for(int i = 1; i <= nm; ++i)
            sc("%d", &vc[i]);
        init(1, 1, nm);
        query(1, 1, nm);
        sort(ans.begin(), ans.end(), greater<ll>());
        pf("Case %d: %lld\n", tc, ans[0]);
        ans.clear();
    }

    return 0;
}
