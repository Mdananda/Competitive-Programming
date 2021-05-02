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
        int nm;
        cin>>nm;
        for(int i = 1; i <= 2*nm; ++i)
        {
            int j, xx;
            sc("%d", &xx);
            for(j = 0; j < vc.size(); ++j)
            {
                if(vc[j] == xx)
                    break;
            }
            if(j == vc.size())
                vc.pb(xx);
        }

        for(int i = 0; i < vc.size(); ++i)
            pf("%d ", vc[i]);
        cout<<endl;
    }

    return 0;
}
