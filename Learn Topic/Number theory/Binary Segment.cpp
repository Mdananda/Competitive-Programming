#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf

int cur, prp[10100];

void pushdown(int nd, int st, int ed)
{
    if(!prp[nd])
        return;
    int lf = 2*nd, rg = 2*nd+1;
    prp[lf] = prp[nd];
    prp[rg] = prp[nd];
   /// prp[nd] = 0;
}

void update(int nd, int st, int ed, int a, int b)
{
    int md = (st+ed)/2;
    int lf = 2*nd, rg = 2*nd+1;
    pushdown(nd, st, ed);
    if(ed < a || st > b)
        return;
    else if(st >= a && ed <= b)
    {
        prp[nd] = (prp[nd]+1)%2;
        return;
    }
    update(lf, st, md, a, b);
    update(rg, md+1, ed, a, b);
}

void query(int nd, int st, int ed, int a)
{
    pushdown(nd, st, ed);
    if(st == a && ed == a)
    {
        cout<<prp[nd]<<endl;
        return;
    }
    else if(st == ed && st != a)
        return;
    int md = (st+ed)/2;
    int lf = 2*nd, rg = 2*nd+1;
    query(lf, st, md, a);
    query(rg, md+1, ed, a);
}

int main()
{
    string ss;
    cin>>ss;
    int nm, sz = ss.size()-1;
    int x, y;
    cin>>x>>y;
    update(1, 0, sz, x, y);
    query(1, 0, sz, 3);

    return 0;
}
