#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int a, b, c, ax, ay, az, bx, by, bz, px, py, pz;

    cin>>a>>b>>c;
    cin>>ax>>ay>>az;
    cin>>bx>>by>>bz;

    px = a+b+c;
    py = ax+ay+az;
    pz = bx+by+bz;

    int dx,dy, dz, dd, asx, asy, asz, ans;
    dx = abs(px-py);
    dy = abs(pz-px);
    dz = abs(pz-py);
    dd = max(dx, dy);
    dd = max(dd, dz);

    if(dd == 0)
        dd = 1;


    for(int i = dd; i > 0; ++i)
    {
        asx = i;
        int ass = (asx+b+c);
        asy = asx-(py-px);
        asz = asx-(pz-px);
        ans = (asx+asy+asz);
        if( asy == 0 || asz == 0)
            continue;
        if(ans == ass)
            break;
    }

    cout<<asx<<" "<<b<<" "<<c<<endl;
    cout<<ax<<" "<<asy<<" "<<az<<endl;
    cout<<bx<<" "<<by<<" "<<asz<<endl;

    return 0;
}


