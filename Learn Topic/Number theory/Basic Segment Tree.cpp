#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back
#define mxx 1e9+10

int vc[100000];
int tmp[500000];

void init(int nd, int st, int ed)
{
    if(st == ed)
    {
        tmp[nd] = vc[st];
        return ;
    }
    int md = (st+ed)/2;
    int lf = 2*nd, rg = 2*nd+1;
    init(lf, st, md);
    init(rg, md+1, ed);
    tmp[nd] = (tmp[lf] + tmp[rg]);
}

int query(int nd, int st, int ed, int a, int b)
{
    if(a > ed || b < st)
        return 0;
    else if(st >= a && ed <= b)
        return tmp[nd];
    int md = (st+ed)/2;
    int lf = 2*nd, rg = 2*nd+1;
    return (query(lf, st, md, a, b) + query(rg, md+1, ed, a, b));
}

int main()
{
    int T;
    cin>>T;

    for(int k = 1; k <= T; ++k)
    {
        int nm, qe;
        sc("%d%d", &nm, &qe);
        for(int i = 1; i <= nm; ++i)
            sc("%d", &vc[i]);
        init(1, 1, nm);
        pf("Case %d:\n", k);
        for(int i = 1; i <= qe; ++i)
        {
            int a, b;
            sc("%d%d", &a, &b);
            pf("%d\n",query(1, 1, nm, a, b));
        }
    }

    return 0;
}
