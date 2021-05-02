#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf

int main()
{
    int ts;
    cin>>ts;
    while(ts--)
    {
        ll nm, nk, np, ans;
        sc("%lld%lld", &nm, &nk);

        np = nk/nm;
        np = ceil((float(np)/ float(nm-1))*nm);

        ans  = nk+np;
        if(ans%nm == 0)
            ans -= 1;
        if(nk != (ans-(ans/nm)))
            ans -= 1;

        cout<<ans<<endl;
    }


    return 0;
}
