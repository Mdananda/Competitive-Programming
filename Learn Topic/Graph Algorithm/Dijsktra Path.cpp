#include <bits/stdc++.h>
using namespace std;
/*
4 3
1 2 3
2 3 1
1 3 1
*/

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int ds, dst, nd, curnd, dis[200000], path[200000];
vector<pair<int, int>> edg[200000];

int Dijkstra(int np, int dsnd)
{
    for(int i = 1; i < 100010; ++i)
    {
        dis[i] = 1e6+1;
    }

    priority_queue< pair<int, int> > qu;
    dis[np] = 0;
    qu.push({-dis[np], np});

    while(!qu.empty())
    {
        auto tmp = qu.top();
        ds = -tmp.first;
        curnd = tmp.second;
        qu.pop();

        for(auto tt : edg[curnd])
        {
            nd = tt.first;
            dst = tt.second;
            if(ds+dst < dis[nd])
            {
                dis[nd] = ds+dst;
                qu.push({-dis[nd], nd});
                path[nd] = curnd;
            }
        }
    }

    return dsnd;
}

int main()
{
    int nm, ed;
    cin>>nm>>ed;
    vector<int> vec;

    for(int i = 1; i <= ed; ++i)
    {
        int x, y, cs;
        cin>>x>>y>>cs;
        edg[x].push_back({y, cs});
        edg[y].push_back({x, cs});
    }

    int dsnd = Dijkstra(1, nm);
    cout<<dis[dsnd]<<endl;

    while(dsnd == nm)
    {
        vec.pb(dsnd);
        dsnd = path[dsnd];
    }
    vec.pb(1);

    reverse(vec.begin(), vec.end());
    for(int i = 0; i < vec.size(); ++i)
        cout<<vec[i]<<" ";
    cout<<endl;

//    for(int i = 1; i <= nm; ++i)
//        cout<<dis[i]<<" ";
//    cout<<endl;


    return 0;
}
