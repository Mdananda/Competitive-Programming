#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb pus_back

struct
{
    ll sm, prg;
}tree[3000];

int ar[200];

void init(int nd, int st, int ed)
{
    if(st == ed)
    {
        tree[nd].sm = ar[st];
        return ;
    }
    int md = (st+ed)/2;
    int lf = 2*nd, rg = 2*nd+1;
    init(lf, st, md);
    init(rg, md+1, ed);
    tree[nd].sm = tree[lf].sm + tree[rg].sm;
}
void update(int nd, int st, int ed, int a, int b, int upval)
{
    if(st > b || a > ed)
        return;
    else if(st>= a && ed <= b)
    {
        tree[nd].sm = upval*(ed-st+1);
        tree[nd].prg = upval;
        return;
    }
    int md = (st+ed)/2;
    int lf = 2*nd, rg = 2*nd+1;
    update(lf, st, md, a, b, upval);
    update(rg, md+1, ed, a, b, upval);
    tree[nd].sm = tree[lf].sm + tree[rg].sm;
}

ll query(int nd, int st, int ed, int a, int b, int carry)
{
    if(st > b || a > ed)
        return 0;
    else if(st>= a && ed <= b)
    {
        return (ed-st+1)*carry;
    }
    int md = (st+ed)/2;
    int lf = 2*nd, rg = 2*nd+1;
    return query(lf, st, md, a, b, tree[nd].prg) + query(rg, md+1, ed, a, b, tree[nd].prg) ;
}

int main()
{
    //tree[10].prg = 0;
   // cout<<tree[10].prg<<endl;
  ///  cout<<ar[10]<<endl;
    cout<<"1"<<endl;

  ///  return 0;
}


