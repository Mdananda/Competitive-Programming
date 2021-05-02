#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        ll nm, mnx, mnp, ans = 0, vc[100], vcc[100];
        mnx = mnp = 1e10;
        cin>>nm;
        for(int i = 0; i < nm; ++i)
        {
            cin>>vc[i];
            mnx = min(mnx, vc[i]);
        }
        for(int i = 0; i < nm; ++i)
        {
            cin>>vcc[i];
            mnp = min(mnp, vcc[i]);
        }

        for(int i = 0; i < nm; ++i)
            ans += max((vc[i]-mnx), (vcc[i]-mnp));
            cout<<ans<<endl;
    }

    return 0;
}
