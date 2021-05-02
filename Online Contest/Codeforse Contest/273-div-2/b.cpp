#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll intt(ll n)
{
    return n*(n-1)/2;
}
int main()
{
    ll n, m, p, q, k;
    cin>>n>>m;
    p = (n%m)*intt(n/m+1)+(m-(n%m))*intt(n/m);

    q = (n-m)+1;
    q = intt(q);

    cout<<p<<" "<<q<<endl;

    return 0;
}
