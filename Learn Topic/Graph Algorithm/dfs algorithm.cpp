#include <bits/stdc++.h>
using namespace std;


int visit[20000];
vector<int> edges[2000];

void dfs(int start)
{
    if(visit[start])
        return ;
    visit[start] = 1;

    for(int i = 0; i < edges[start].size(); ++i)
    {
        dfs(edges[start][i]);
    }

}

int main()
{
    int n, m;
    cin>>n>>m;

    for(int i = 1; i <= m; ++i)
    {
        int x, y;
        cin>>x>>y;
        edges[x].push_back(y);
        edges[y].push_back(x);
    }

    return 0;
}
