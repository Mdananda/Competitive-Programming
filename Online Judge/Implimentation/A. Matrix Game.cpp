#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf pritnf
#define pb push_back

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

int main()
{
    int ts;
    cin>>ts;

    while(ts--)
    {
        int nm, mn, p, q, asn, ap = 0;
        sc("%d%d", &nm, &mn);
        vector<int> vc[50];

        for(int i = 0; i < nm; ++i)
        {
            for(int j = 0; j < mn; ++j)
            {
                int x;
                sc("%d", &x);
                vc[i].pb(x);
            }
        }



        while(1)
        {
            asn = 0;
            p = q = -1;
            for(int i = 0; i < nm; ++i)
            {
                for(int j = 0; j < mn; ++j)
                {
                    int ans = 0;
                    if(vc[i][j] == 1)
                        continue;
                    for(int k = 0; k < 4; ++k)
                    {
                        int x = i+dx[k];
                        int y = j+dy[k];
                        if((x >= 0 && x < nm) && (y >= 0 && y < mn) && (vc[x][y] == 0))
                            ans++;
                        else if((x >= 0 && x < nm) && (y >= 0 && y < mn) && vc[x][y] == 1)
                            break;
                    }
                    if(ans > asn)
                    {
                        asn = ans;
                        p = i;
                        q = j;
                    }
                    ///  cout<<asn<<endl;
                }

            }
            if(p != -1)
            {
                ap++;
                vc[p][q] = 1;
                ///  cout<<vc[p][q]<<endl;
            }
            else
                break;
        }

        if(ap%2 == 0)
            cout<<"Vivek"<<endl;
        else
            cout<<"Ashish"<<endl;
    }

    return 0;
}


