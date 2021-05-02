#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

vector<int> edges[10000];
int vis[1000];

void dfs(int nd)
{
    vis[nd] = 1;
    cout<<nd<<endl;
    for(int i = 0; i < edges[nd].size(); ++i)
    {
        int to = edges[nd][i];
        if(vis[to] == 0)
            dfs(to);
    }
}
/*
6 4
2 3
2 5
3 4
5 6

*/

int main()
{
    int nm, mn, x, y;
    cin>>nm>>mn;

    for(int i = 1; i <= mn; ++i)
    {
        sc("%d%d", &x, &y);
        edges[x].pb(y);
        edges[y].pb(x);
    }

    dfs(2);

    return 0;
}
