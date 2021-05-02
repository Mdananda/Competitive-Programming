#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pb push_back

int tr[1000], prp[1000], ar[1000];

void init(int nd, int st, int ed)
{
    if(st == ed)
    {
        tr[nd] = ar[ed];
        return;
    }
    int md = (st+ed)/2;
    int lf = 2*nd, rg = 2*nd+1;
    init(lf, st, md);
    init(rg, md+1, ed);
    tr[nd] = tr[lf] + tr[rg];
}

void pushdown(int nd, int st, int ed)
{
    if(!prp[nd])
        return;
    int md = (st+ed)/2;
    int lf = 2*nd, rg = 2*nd+1;
    int lsz = md-st+1, rsz = ed-md;
    tr[lf] = lsz*prp[nd];
    prp[lf] = prp[nd];
    tr[rg] = rsz*prp[nd];
    prp[rg] = prp[nd];
    prp[nd] = 0;
}

void update(int nd, int st, int ed, int a, int b, int upval)
{
    int md = (st+ed)/2;
    int lf = 2*nd, rg = 2*nd+1;
    pushdown(nd, st, ed);
    if(ed < a || st > b)
        return;
    else if(st >= a && ed <= b)
    {
        int sz = ed-st+1;
        tr[nd] = sz*upval;
        prp[nd] = upval;
        return;
    }
    update(lf, st, md, a, b, upval);
    update(rg, md+1, ed, a, b, upval);
    tr[nd] = tr[lf] + tr[rg];
}

int query(int nd, int st, int ed, int a, int b)
{
    int md = (st+ed)/2;
    int lf = 2*nd, rg = 2*nd+1;
    pushdown(nd, st, ed);
    if(ed < a || st > b)
        return 0;
    else if(st >= a && ed <= b)
        return prp[nd];
    ss.insert(query(lf, st, md, a, b));
    ss.insert(query(rg, md+1, ed, a, b));
}

int main()
{
    int np = 1, nm = 4;
    while(nm--)
    {
        int x, y;
        cin>>x>>y;
        update(1, 1, 10, x, y, np);
        np++;
    }
    cout<<ss.size()-1<<endl;

    return 0;
}
