#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf

int fnc(ll n)
{
    for(int i = 3; i*i <= n+1; ++i)
    {
        if(n%i == 0)
            return i;
    }
    return n;
}

int main()
{
    int ts;
    cin>> ts;

    while(ts--)
    {
        ll nm, nk, ans;
        sc("%lld%lld", &nm, &nk);
        ans = nm;
        if(nm%2 != 0){
            ans += fnc(nm);
           /// cout<<fnc(nm)<<endl;
        }
        else
            ans += 2;

        for(int i = 1; i < nk; ++i)
            ans += 2;

        cout<<ans<<endl;
    }

    return 0;
}
