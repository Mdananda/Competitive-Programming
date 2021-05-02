#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e7+9;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    ll n, k, mn, mx, mp, mm;
    sc("%lld%lld", &n, &k);
    mx = mn = 0;
    mx = n-(k-1);
    if(mx > 1)
        mx = mx*(mx-1)/2;
    else
        mx = 0;

    if(n%k == 0)
    {
        mn = n/k;
        if(mn > 1)
            mn = (mn*(mn-1)/2)*k;
        else
            mn = 0;
    }
    else
    {
        mn = n/k;
        mp = n%k;
        mm = mn*(mn+1)/2;
        mm = mm*mp;
        if(mn > 1)
            mn = (mn*(mn-1)/2)*(k-mp);
        else
            mn = 0;

        mn = mn + mm;
    }

    cout<<mn<<" "<<mx<<endl;



    return 0;
}
