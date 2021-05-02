#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf

int seive(ll n)
{
    ll nm = sqrt(n)+1;
    for(int i = 3; i <= nm; i += 2)
    {
        if(n%i == 0)
            return i;
    }
    return 0;
}

int main()
{
    ll nm;
    cin>>nm;

    if(!(nm%2))
        cout<<nm/2<<endl;
    else
    {
        ll ck = seive(nm);
        if(!ck)
            cout<<1<<endl;
        else
            cout<<((nm-ck)/2)+1<<endl;
    }

    return 0;
}
