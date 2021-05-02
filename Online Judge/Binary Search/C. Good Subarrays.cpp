#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf

int vc[100000];
int tmp[100000], ans;

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
    if(tmp[lf] + tmp[rg] == (ed-st+1))
        ans++;
}


int main()
{
    int nm;
    cin>>nm;
    for(int i = 1; i <= nm; ++i)
        sc("%d", &vc[i]);
    init(1, 1, nm);
    cout<<ans<<endl;

    return 0;
}
