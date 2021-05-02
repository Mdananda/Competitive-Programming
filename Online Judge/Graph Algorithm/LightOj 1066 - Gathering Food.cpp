#include <bits/stdc++.h>
using namespace std;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

char ar[15][15];
int cur[15][15];

int BFS(int x, int y)
{
    queue<pair<int, int>> qu;
    qu.push({x, y});
    char ch = ar[x][y]+1;
    while(!qu.empty())
    {
        auto pp = qu.front();
        int nx = pp.first, ny = pp.second;
        for(int i = 0; i < 4; ++i)
        {
            int tmpx = nx+dx[i], tmpy = ny+dy[i];
            if(ar[tmpx][tmpy] != '#' || ar[tmpx][tmpy] < ar[x][y] || ar[tmpx][tmpy] == '.')
            {
                qu.push({tmpx, tmpy});
                cur[tmpx][tmpy] = cur[nx][ny] + 1;
            }
            else if(ar[tmpx][tmpy] == ch)
                return (ar[nx][ny]+1);
        }
        qu.pop();
    }
    return 0;
}

int main()
{
    int nm, np;
    memset(cur, 0, sizeof(cur));
    cin>>nm>>np;
    pair<char, pair<int, int>> pr;
    for(int i = 0; i < nm; ++i)
    {
        for(int j = 0; j < np; ++j)
        {
            cin>>ar[i][j];
            if(ar[i][j] != '#' || ar[i][j] != '.')
            {
                pr.first = ar[i][j];
                pr.second = {i, j};
            }
        }
    }


    return 0;
}

