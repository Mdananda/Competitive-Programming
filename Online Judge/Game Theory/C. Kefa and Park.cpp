#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

vector<int> vc[100010];
int ar[100010], dis[100010], cur;
bool vis[100010];

void BFS(int nd, int np)
{
    queue<int> qu;
    qu.push(nd);
    dis[nd] = ar[nd];

    while(!qu.empty())
    {
        int kp = 0, idx = qu.front();
        vis[idx] = 1;
        qu.pop();
        for(int i = 0; i < vc[idx].size(); ++i)
        {
            int tmp = vc[idx][i];
            if(vis[tmp] == 0)
            {
                if(ar[tmp])
                    dis[tmp] = dis[idx]+1;
                if(dis[tmp] <= np)
                    qu.push(tmp);
                kp++;
            }
        }
        if(kp == 0 && dis[idx] <= np)
            cur++;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int nm, np;
    cin>>nm>>np;

    for(int i = 1; i <= nm; ++i)
        cin>>ar[i];
    for(int i = 1; i < nm; ++i)
    {
        int x, y;
        cin>>x>>y;
        vc[x].pb(y);
        vc[y].pb(x);
    }

    BFS(1, np);
    cout<<cur<<endl;

    return 0;
}

