#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf

int main()
{
    ll nm, np, gcd, lcm;
    cin>>nm>>np;

    gcd = __gcd(nm, np);
    lcm = (nm/gcd)*np;
    cout<<lcm<<endl;

    return 0;
}
