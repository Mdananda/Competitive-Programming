#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int dis[10000], vis[10000];
vector<int> vc[2010];

void BFS(int nd)
{
    queue<int> qu;
    qu.push(nd);
    dis[nd] = 1;
    while(!qu.empty())
    {
        int curid = qu.front();
        vis[curid] = 1;
        qu.pop();
        for(int i = 0; i < vc[curid].size(); ++i)
        {
            int tmp = vc[curid][i];
            if(vis[tmp] == 0)
            {
                qu.push(tmp);
                dis[tmp] = dis[curid]+1;
            }
        }
    }
}

int main()
{
    int nm, ar[2020];
    cin>>nm;

    for(int i = 1; i <= nm; ++i)
    {
        cin>>ar[i];
        if(ar[i] != -1){
            vc[ar[i]].pb(i);
            vc[i].pb(ar[i]);
        }
    }

    for(int i = 1; i <= nm; i++)
    {
        if(ar[i] == -1)
            BFS(i);
    }

    sort(dis, dis+2020, greater<int>());
    cout<<dis[0]<<endl;

    return 0;
}
