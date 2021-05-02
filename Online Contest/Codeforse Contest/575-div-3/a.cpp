#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    ll n;
    cin>>n;
    while(n--)
    {
        ll a, b, c;
        cin>>a>>b>>c;
        ll r = (a+b+c);
        r = floor(r/2);
        cout<<r<<endl;
    }

    return 0;
}
