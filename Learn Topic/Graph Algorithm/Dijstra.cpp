#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back
#define mx 100000

vector <pair<int, int>> edges[2000];
int dis[2000];
queue <int> qu;

void Dstra(int nd)
{
    for(int i = 1; i <= 2000; ++i)
        dis[i] = mx;
    qu.push(nd);
    dis[nd] = 0;

    while(!qu.empty())
    {
        int nnd = qu.front();
        qu.pop();
        for(auto it : edges[nnd])
        {
            int curnd = it.first;
            int curCst = it.second;
            if(dis[nnd] + curCst < dis[curnd])
            {
                dis[curnd] = dis[nnd] + curCst;
                qu.push(curnd);
            }
        }
    }
}

/*

4 4
1 2 1
1 3 5
2 3 3
3 4 2

*/

int main()
{
    int nm, mn, x, y, cx;
    sc("%d%d", &nm, &mn);

    for(int i = 1; i <= mn; ++i)
    {
        sc("%d%d%d", &x, &y, &cx);
        edges[x].pb({y, cx});
        edges[y].pb({x, cx});
    }

    Dstra(1);
    cout<<endl;
    for(int i = 1; i <= nm; ++i)
        cout<<dis[i]<<" ";
    cout<<endl;

    return 0;
}
