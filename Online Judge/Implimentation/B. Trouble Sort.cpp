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
        int i, nm, cur = 0;
        sc("%d", &nm);

        vector<int> vc, vcc;

        for(int i = 1; i <= nm; ++i)
        {
            int x;
            sc("%d", &x);
            vc.pb(x);
        }

        for(int i = 1; i <= nm; ++i)
        {
            int x;
            sc("%d", &x);
            vcc.pb(x);
        }


        for(int i = 0; i < nm; ++i)
        {
            for(int j = i; j < nm; ++j)
            {
                if((vc[i] != vc[j]) && (vcc[i] != vcc[j]))
                {
                    cur = 1;
                    break;
                }
            }
        }

        for(i = 1; i < nm; ++i)
        {
            if(vc[i] < vc[i-1])
                break;
        }

        if(cur == 1 || i == nm)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }



    return 0;
}
