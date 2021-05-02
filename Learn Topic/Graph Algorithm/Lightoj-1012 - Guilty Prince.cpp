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
        int nm, nk, ix, jx, ans = 0;
        sc("%d%d", &nk, &nm);

        string ss[30];
        int visit[30][30] = {0};

        for(int i = 0; i < nm; ++i)
        {
            cin>>ss[i];
        }

        for(int i = 0; i < nm; ++i)
        {
            for(int j = 0; j < nk; ++j)
            {
                if(ss[i][j] == '@')
                {
                    ix = i;
                    jx = j;
                    break;
                }
            }
        }

        /// cout<<ix<<" "<<jx<<endl;

        queue<int> qu;
        qu.push(ix);
        qu.push(jx);
        visit[ix][jx] = 1;

        while(!qu.empty())
        {
            ix = qu.front();
            qu.pop();
            jx = qu.front();
            qu.pop();

            ///  cout<<ix<<" "<<jx<<endl;

            if((jx-1) >= 0 && ss[ix][jx-1] == '.'&& visit[ix][jx-1] == 0)
            {
                ans++;
                qu.push(ix);
                qu.push((jx-1));
                visit[ix][jx-1] = 1;
            }

            if((jx+1) < nk && ss[ix][jx+1] == '.' && visit[ix][jx+1] == 0)
            {
                ans++;
                qu.push(ix);
                qu.push((jx+1));
                visit[ix][jx+1] = 1;
            }

            if((ix-1) >= 0 && ss[ix-1][jx] == '.'&& visit[ix-1][jx] == 0)
            {
                ans++;
                qu.push((ix-1));
                qu.push(jx);
                visit[ix-1][jx] = 1;
            }

            if((ix+1) < nm && ss[ix+1][jx] == '.'&& visit[ix+1][jx] == 0)
            {
                ans++;
                qu.push((ix+1));
                qu.push(jx);
                visit[ix+1][jx] = 1;
            }
        }

        pf("Case %d: %d\n", k, ans+1);
    }

    return 0;
}
