#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int ts;
    sc("%d", &ts);
    while(ts--)
    {
        ll nx, ny, nm, tmp;
        sc("%lld%lld%lld", &nx, &ny, &nm);

        tmp = nm%nx;
        cout<<tmp<<endl;
        if(tmp < ny)
            cout<<(nm+abs(tmp-ny))-nx<<endl;
        else if(tmp > ny)
            cout<<nm-abs(ny-tmp)<<endl;
        else
            cout<<nm<<endl;
    }

    return 0;
}
