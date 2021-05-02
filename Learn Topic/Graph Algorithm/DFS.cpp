#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf pritnf
#define pb push_back

vector<int> edg[200000];
int vst[200000];

void Dfs(int nd, int prnt)
{
    ///cout<<nd<<" "<<prnt<<endl;
    if(vst[nd] != 0 && vst[nd] != 2)
    {
        /// cout<<"Cycle"<<endl;
        return ;
    }
///   cout<<nd<<" ";
    vst[nd] = 1;
    for(int i = 0; i < edg[nd].size(); ++i)
    {
        if(edg[nd][i] == prnt)
        {
            cout<<edg[nd][i]<<" "<<prnt<<endl;
            continue;
        }
        Dfs(edg[nd][i], nd);
    }
    vst[nd] = 2;
}

int main()
{
    int nm, mn;
    sc("%d%d", &nm, &mn);

    for(int i = 1; i <= mn; ++i)
    {
        int x, y;
        sc("%d%d", &x, &y);
        edg[x].pb(y);
        edg[y].pb(x);
    }
    Dfs(1, -1);

    return 0;
}


