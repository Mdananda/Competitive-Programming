#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back


int main()
{
    int nm, np, nx, ny, tnx, tny;
    cin>>nm>>np>>nx>>ny;
    for(int k = 1; k <= 4; ++k)
    {
        int chess[110][110] = {0};
        chess[nx][ny] = 1;
        queue< pair<int, int>> qq;
        pair<int, int> pr;
        qq.push({nx, ny});
        while(!qq.empty())
        {
            auto tt = qq.front();
            qq.pop();
            nx = tt.first;
            ny = tt.second;
          //  pr.push_back({nx, ny});
            for(int i = 0; i < 4; ++i)
            {
                tnx = nx + dx[i];
                tny = ny + dy[i];
                if((tnx >= 1 && tnx <= nm) && (tny >= 1 && tny <= np) && chess[tnx][tny] == 0)
                {
                    chess[tnx][tny] = 1;
                    qq.push({tnx, tny});
                    break;
                }
            }
        }

    }


        return 0;
    }
