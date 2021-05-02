#include <bits/stdc++.h>
using namespace std;

/*
5 6
1 2 3
2 4 2
1 3 5
3 4 3
2 5 6
3 5 4
*/

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int cur = 1, dis[2000], prn[2000];
vector< pair<int, int> > edg[2200];

int Dijsktra(int np, int dsnd)
{
    for(int i = 1; i < 2000; ++i)
        dis[i] = 1e8+1;
    priority_queue< pair <int, int> > qu;

    prn[0] = np;
    dis[np] = 0;
    qu.push({-dis[np], np});

    while(!qu.empty())
    {
        auto tmp = qu.top();
        int ds = -tmp.first;
        int curnd = tmp.second;
        qu.pop();

        for(auto it : edg[curnd])
        {
            int nd = it.first;
            int dst = it.second;
            int mx = ds + dst;
            if(mx < dis[nd])
            {
                prn[nd] = curnd;
                dis[nd] = mx;
                qu.push({-dis[nd], nd});
            }
        }
    }

//    for(int i = 1; i <= dsnd; ++i)
//        cout<<dis[i]<<" ";
}

int main()
{
    int nm, ed;
    cin>>nm>>ed;
    vector<int> vc;

    for(int i = 1; i <= ed; ++i)
    {
        int x, y, cs;
        cin>>x>>y>>cs;
        edg[x].push_back({y, cs});
        edg[y].push_back({x, cs});
    }

    Dijsktra(1, nm);

    if(dis[nm] != 1e8+1)
    {
        vc.pb(nm);
        for(int i = nm; prn[i] != 1; )
        {
            vc.pb(prn[i]);
            i = prn[i];
        }
        vc.pb(1);
        reverse(vc.begin(), vc.end());
        for(int i = 0; i < vc.size(); ++i)
            cout<<vc[i]<<" ";
        cout<<endl;
    }
    else
        cout<<"-1"<<endl;

    return 0;
}
