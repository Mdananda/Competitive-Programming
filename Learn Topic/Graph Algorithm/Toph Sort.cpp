#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define sc scanf
#define pf printf

vector<int> edges[1000];
int indg[1000];
priority_queue<int>qu;

int main()
{
    int nm, mn, x, y;
    cin>> nm >> mn;

    for(int i = 1; i <= mn; ++i)
    {
        sc("%d%d", &x, &y);
        edges[x].push_back(y);
        indg[y]++;
    }

    for(int i = 1; i <= nm; ++i)
    {
        if(indg[i] == 0)
            qu.push(-i);
    }

    ///Top Sort Part

    cout<<"\nValid Top Sort : ";
    while(!qu.empty())
    {
        int to = -qu.top();
        qu.pop();
        cout<<to<<' ';

        for(int i = 0; i < edges[to].size(); ++i)
        {
            int cur = edges[to][i];
            indg[cur]--;
            if(indg[cur] == 0) qu.push(-cur);
        }

    }
    cout<<endl;


    return 0;
}
