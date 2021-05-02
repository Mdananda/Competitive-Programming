#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int nm;
        string str="";
        sc("%d", &nm);
        vector<int> vc[nm+1];
        int dis[nm+1]= {0};

        for(int i = 1; i <= nm; ++i)
        {
            int nx;
            sc("%d", &nx);
            while(nx--)
            {
                int nn;
                sc("%d", &nn);
                vc[i].pb(nn);
            }
        }

        for(int i = 1; i <= nm; ++i)
        {
            int j;
            for(j = 0; j < vc[i].size(); ++j)
            {
                int tmp = vc[i][j];
                if(dis[tmp] == 0)
                {
                    dis[tmp] = 1;
                    break;
                }
            }
            if(j == vc[i].size())
            {
                str = "IMPROVE";
                cout<<"IMPROVE"<<endl;
                cout<<i<<" ";
                break;
            }
        }

        if(str == "IMPROVE")
        {
            for(int i = 1; i <= nm; ++i)
            {
                if(dis[i] == 0)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
        else
            cout<<"OPTIMAL"<<endl;
    }

    return 0;
}
