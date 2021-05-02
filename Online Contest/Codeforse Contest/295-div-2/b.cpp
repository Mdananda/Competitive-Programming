#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, m, i = 0;
    cin>>n>>m;

    for(i = 0; m > n; ++i)
    {
        if(m%2 != 0)
            m++;
        else
            m /= 2;
    }

    if(m <= n)
        i += (n-m);

    cout<<i<<endl;

    return 0;
}
