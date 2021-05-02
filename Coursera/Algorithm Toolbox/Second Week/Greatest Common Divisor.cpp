#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf

int main()
{
    ll nm, np, gcd;
    cin>>nm>>np;

    gcd = __gcd(nm, np);
    cout<<gcd<<endl;

    return 0;
}
