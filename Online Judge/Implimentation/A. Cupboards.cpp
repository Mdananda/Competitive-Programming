#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf

int mnx, mxx, mny, mxy;

int main()
{
    int n;
    cin>>n;

    for(int i = 1; i <= n; ++i)
    {
        int x, y;
        cin>>x>>y;
        if(x == 0)
            mnx++;
        else
            mxx++;
        if(y == 0)
            mny++;
        else
            mxy++;
    }

    ll ans = min(mnx, mxx) + min(mxy, mny);
    cout<<ans<<endl;


    return 0;
}
