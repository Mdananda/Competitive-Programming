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
        ll na, nb, nax, nbx, nm, ans = 0;
        sc("%lld%lld%lld", &nax, &nbx, &nm);
        na = min(nax, nbx);
        nb = max(nax, nbx);
      ///  cout<<na<<" "<<nb<<endl;

        while(1)
        {
            if((na+nb) <= nm)
            {
                na += nb;
                ans++;
            }
            if((na+nb) <= nm)
            {
                nb += na;
                ans++;
            }
            if((na+nb) > nm)
            {
                ans++;
                break;
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}
