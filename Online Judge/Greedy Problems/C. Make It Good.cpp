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
    while(ts--)
    {
        vector<int> vc;
        int nm, lf, rg, sz, cnt = 0, prv = 0;
        cin>>nm;
        for(int i = 1; i <= nm; ++i)
        {
            int x;
            cin>>x;
            vc.pb(x);
        }
        lf = 0, rg = nm-1, sz = nm;

        while(sz--)
        {
            int tmp2, tmp1 = min(vc[lf], vc[rg]);
            tmp2 =  max(vc[lf], vc[rg]);
            if(tmp1 >= prv)
            {
                if(tmp1 == vc[lf])
                    lf++;
                else
                    rg--;
                prv = tmp1;
                cnt++;
            }
            else if(tmp2 >= prv)
            {
                if(tmp2 == vc[lf])
                    lf++;
                else
                    rg--;
                prv = tmp2;
                cnt++;
            }
            else
                break;
        }
        cout<<(nm-cnt)<<endl;
    }

    return 0;
}
