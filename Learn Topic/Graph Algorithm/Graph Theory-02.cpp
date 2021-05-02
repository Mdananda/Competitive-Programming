#include <bits/stdc++.h>
using namespace std;

#define sc scanf
#define pf printf
#define pb push_back

///****Tree
///1. Graph must be connected
///2. Graph must be acyclic
///3. Graph has n-1 edges

///Rooted Tree: Every node has a must be root.

int visit[1000], dis[1000];
vector<int> edge[1000];
//
//void BFS(int nd)
//{
//    queue<int> qu;
//    qu.push(nd);
//    dis[nd] = 0;
//    visit[nd] = 1;
//    while(!qu.empty())
//    {
//        int indx = qu.front();
//        for(int i = 0; i < edge[indx].size(); ++i)
//        {
//            if(visit[edge[indx][i]]  == 1)
//                continue;
//            qu.push(edge[indx][i]);
//            visit[edge[indx][i]] = 1;
//            dis[edge[indx][i]] += (dis[indx]+1);
//        }
//        qu.pop();
//    }
//
//}

void DFS(int nd, int prnt)
{
    if(visit[nd] == 1)
    {
        cout<<nd<<" Cycle "<<prnt<<endl;
        return;
    }
    visit[nd] = 1;
    for(int i = 0; i < edge[nd].size(); ++i)
    {
        if(edge[nd][i] == prnt)
        {
          ///  cout<<edge[nd][i]<<" "<<prnt<<endl;
            continue;
        }
        DFS(edge[nd][i], nd);
    }
    visit[nd] = 2;
}


int main()
{
    int mm;
    sc("%d", &mm);
    for(int i = 1; i <= mm; ++i)
    {
        int x, y;
        sc("%d%d", &x, &y);
        edge[x].pb(y);
      ///  edge[y].pb(x);
    }
    /// BFS(1);
    DFS(1, 0);
//    for(int i = 0; i < 10; ++i)
//    {
//        if(visit[i] == 1)
//            cout<<i<<endl;
//    }

    return 0;
}
