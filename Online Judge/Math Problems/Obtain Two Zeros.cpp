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
        ll n, k, nm, nx, mm;
        sc("%lld%lld", &n, &k);

        nm = max(n, k);
        mm = min(n, k);

        nx = (2*nm-mm)/3;
        nm = nm - 2*nx;
        mm = mm -nx;
        if(2*nm == mm && nm >= 0 && mm >= 0)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }

    return 0;
}
