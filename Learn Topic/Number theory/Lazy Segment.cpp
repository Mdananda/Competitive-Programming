#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int tr[100005], prp[100005];
int ar[100005];

void init(int nd, int st, int ed)
{
    if(st == ed)
    {
        tr[nd] = ar[st];
        return;
    }
    int md = (st+ed)/2;
    int lf = 2*nd, rg = 2*nd+1;
    init(lf, st, md);
    init(rg, md+1, ed);
    tr[nd] = tr[lf] + tr[rg];
}
void update(int nd, int st, int ed, int a, int b, int upval)
{
    if(ed < a || st > b)
        return;
    else if(st >= a && ed <= b)
    {
        tr[nd] = (ed-st+1)*upval;
        prp[nd] = upval;
        return;
    }
    int md = (st+ed)/2;
    int lf = 2*nd, rg = 2*nd+1;
    update(lf, st, md, a, b, upval);
    update(rg, md+1, ed, a, b, upval);
    tr[nd] = tr[lf] + tr[rg] + (ed-st+1)*prp[nd];
}

int query(int nd, int st, int ed, int a, int b, int cry)
{
    if(ed < a || st > b)
        return 0;
    else if(st >= a && ed <= b)
    {
        return tr[nd] += (ed-st+1)*cry;
    }
    int md = (st+ed)/2;
    int lf = 2*nd, rg = 2*nd+1;
    return query(lf, st, md, a, b, prp[nd]+cry) + query(rg, md+1, ed, a, b, prp[nd]+cry);
}

int main()
{
    int tc;
    cin>>tc;
    for(int i = 1; i <= tc; ++i)
    {
        int x, y, ad, nm, np, pnt;
        cin>>nm>>np;
        for(int j = 1; j <= 100005; ++j)
        {
            ar[j] = 0;
            tr[j] = 0;
            prp[j] = 0;
        }
        while(np--)
        {
            cin>>pnt;
            if(pnt == 0)
            {
                cin>>x>>y>>ad;
                update(1, 1, nm, x, y, ad);
            }
            else
            {
                cin>>x>>y;
                cout<<query(1, 1, nm, x, y, 0)<<endl;
            }
        }
    }

    return 0;
}
