#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int ts;
    cin>>ts;

    for(int k = 1; k <= ts; ++k)
    {
        map<string, int> mp, cnt;
        int indg[10010] = {0};
        vector<int> edg[10010];

        int nm, id = 1;
        queue<int> qu;
        sc("%d", &nm);

        for(int i = 1; i <= nm; ++i)
        {
            string nx,mx;
            cin>>nx>>mx;

            if(mp[nx] == 0)
            {
                mp[nx] = 1;
                cnt[nx] = id;
                id++;
            }

            if(mp[mx] == 0)
            {
                mp[mx] = 1;
                cnt[mx] = id;
                id++;
            }

            edg[cnt[nx]].pb(cnt[mx]);
            indg[cnt[mx]]++;
        }

        for(int i = 1; i < id; ++i)
            if(indg[i] == 0)
                qu.push(i);

        int ans = 1;
        while(!qu.empty())
        {
            int to = qu.front();
            qu.pop();
            ans++;

            for(int i = 0; i < edg[to].size(); ++i)
            {
                int tmp = edg[to][i];
                indg[tmp]--;
                if(indg[tmp] == 0)
                    qu.push(tmp);
            }

        }

        if(ans == id)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}


