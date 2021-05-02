#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, m, ans;
    cin>>n>>m;

    ans = (n+m)/3;
    if(n >= ans && m >= ans)
        cout<<ans<<endl;
    else
        cout<<min(m,n)<<endl;

    return 0;
}

