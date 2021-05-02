#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    vector<int> vc;
    int nm, np;
    cin>>nm>>np;
    int ar[500], br[500];
    for(int i = 1; i <= nm; ++i)
        sc("%d", &ar[i]);
    for(int i = 1; i <= np; ++i)
        sc("%d", &br[i]);

    for(int i = 1; i <= nm; ++i)
    {
        int cn, cp = 1e5;
        for(int j = 1; j <= np; ++j)
        {
            cn = ar[i]&br[j];
            if(cn < cp)
                cp = cn;
        }
        /// cout<<cp<<endl;
        vc.pb(cp);
    }
    sort(vc.begin(), vc.end());
    int ans = vc[0];
    for(int i = 1; i < vc.size(); ++i)
        ans = ans|vc[i];
    cout<<ans<<endl;

    return 0;
}
