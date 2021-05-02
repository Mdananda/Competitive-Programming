#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

vector<int> edge[2000];
int sum[10000];

void dfs(int nd,  prnt)
{
    int ans = nd;
    for(int i = 0; i <= edge[nd].size(); ++i)
    {
        int to = edge[nd][i];
        if(to == prnt) continue;
        dfs(to, nd);
        ans += sum[to];
    }
    sum[nd] = ans;
}

int main()
{


    return 0;
}
