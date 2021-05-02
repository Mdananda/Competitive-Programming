#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

vector<int> edg[200000];
int indg[200000];

int main()
{
    int nm, mn;
    queue<int> qu;
    sc("%d%d", &nm, &mn);

    for(int i = 1; i <= mn; ++i)
    {
        int x, y;
        sc("%d%d", &x, &y);
        edg[x].pb(y);
        indg[y]++;
    }

    for(int i = 1; i <= nm; ++i)
    {
        if(indg[i] == 0)
            qu.push(i);
    }

    while(!qu.empty())
    {
        int to = qu.front();
        qu.pop();
        cout<<to<<endl;

        for(int i = 0; i < edg[to].size(); ++i)
        {
            int tmp = edg[to][i];
            indg[tmp]--;
            if(indg[edg[to][i]] == 0)
                qu.push(tmp);
        }
    }

    return 0;
}
