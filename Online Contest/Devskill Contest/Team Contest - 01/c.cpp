#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double ll2;

int main()
{
    ll a, b, c, ans;
    cin>>a>>b>>c;

    ll2 i, j, k;
    i = sqrt((a*c)/b);
    j = sqrt((a*b)/c);
    k = sqrt((b*c)/a);

    ans = (i+j+k)*4;

    cout<<ans<<endl;


    return 0;
}

