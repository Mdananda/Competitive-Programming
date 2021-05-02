#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

ll nm, np, nx, mx, tmx;
vector<int> vec;

int fnc(ll md)
{
    ll i, idx, sz;
    vector<int> vc(vec.begin(), vec.end());
    sz = vc.size();
    for(i = 0; i < vc.size(); )
    {
        if(vc[i] < md)
        {
            for(int j = 0; j < nx; ++j)
            {
                idx = i+j;
                if(idx >= sz)
                    break;
                vc[idx] = vc[idx]+1;
                mx--;
            }
            if(mx < 0)
                break;
        }
        else
            i++;
    }
  ///  cout<<mx<<" "<<i<<endl;
    if(mx >= 0 && i == sz)
        return 1;
    else
        return 0;
}

int main()
{
    cin>>nm>>np>>nx;

    for(int i = 1; i <= nm; ++i)
    {
        int x;
        sc("%d", &x);
        vec.pb(x);
        if(x > tmx)
            tmx = x;
    }

    ll lo = 0, hi = tmx+np;
    while((hi-lo) > 1)
    {
        mx = np*nx;
        ll md = (lo+hi)/2;
        if(fnc(md) == 1)
            lo = md;
        else
            hi = md-1;
    }

    mx = np*nx;
    if(fnc(hi) == 1)
        cout<<hi<<endl;
    else
        cout<<lo<<endl;

    return 0;
}
