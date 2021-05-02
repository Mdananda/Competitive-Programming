#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf


int main()
{
    int ts;
    cin>>ts;

    while(ts--)
    {
        int a, b, q, gcd, lcm, mp;
        cin>>a>>b>>q;
        gcd = __gcd(a, b);
        lcm = (a*b)/gcd;
        mp = max(a, b);

        for(int i = 1; i <= q; ++i)
        {
            ll x, y, px, py, dst, mn, mx, mk, cnt, ans;
            sc("%lld%lld", &px, &py);
            x = min(px, py);
            y = max(px, py);

            if(y < mp)
            {
                cout<<0<<endl;
                continue;
            }
            else if(x < mp)
                x = mp;
            dst = (y-x)+1;

            mn = x/lcm;
            if(mn > 0)
            {
                ll px = (mn*lcm)+mp;
                if(px > x)
                {
                    dst -= (px-x);
                }
            }

            mx = y/lcm;
            if(mx > 0){
            mk = mx*lcm+(mp-1);
            if(mk >= y)
                dst -= ((y+1)-(lcm*mx));
            else if(y >= mk)
                dst -= mp;
                mx--;
            }

            cnt = mx-mn;

            dst -= (cnt*mp);

            cout<<dst<<endl;
        }
    }


    return 0;
}
