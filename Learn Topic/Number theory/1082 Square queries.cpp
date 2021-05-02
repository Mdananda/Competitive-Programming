#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back
int vc[510][510];
int tmp[1510][1510];

void init(int indx, int nd, int st, int ed)
{
    if(st==ed)
    {
        tmp[indx][nd] = vc[indx][st];
        return;
    }
    int md = (st+ed)/2;
    int lf = 2*nd, rg = 2*nd+1;
    init(indx, lf, st, md);
    init(indx, rg, md+1, ed);
    tmp[indx][nd] = max(tmp[indx][lf], tmp[indx][rg]);
}

int query(int indx, int nd, int st, int ed, int a, int b)
{
    if(a > ed || b < st)
        return 0;
    else if(st >= a &&  ed <= b)
        return tmp[indx][nd];
    int md = (st+ed)/2;
    int lf = 2*nd, rg = 2*nd+1;
    return max(query(indx, lf, st, md, a, b), query(indx, rg, md+1, ed, a, b));
}


int main()
{
    int T;
    sc("%d", &T);
    for(int tc = 1; tc <= T; ++tc)
    {
        int nm, s, x, y, a, b, qq, ans, mx;
        sc("%d%d", &nm, &qq);
        for(int i = 1; i <= nm; ++i)
        {
            for(int j = 1; j <= nm; ++j)
                sc("%d", &vc[i][j]);

            init(i, 1, 1, nm);
        }
        pf("Case %d:\n", tc);
        for(int k = 1; k <= qq; ++k)
        {
            mx = ans = 0;
            sc("%d%d%d", &x, &y, &s);
            a = (x+s)-1;
            b = (y+s)-1;
            for(int i = x; i <= a; ++i)
            {
                ans = query(i, 1, 1, nm, y, b);
                if(ans > mx)
                    mx = ans;
            }
            pf("%d\n",mx);
        }
    }

    return 0;
}
/*
3
1 2 3
2 3 4
2 4 5

1 1 2 2

*/
