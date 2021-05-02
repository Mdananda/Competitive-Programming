#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf

int main()
{
    ll n, ans;
    cin>>n;

    if(n <= 3)
    {
        if(n < 3)
            cout<<n<<endl;
        else
            cout<<6<<endl;

        return 0;
    }
    else if(n%2 == 1)
        ans = n*(n-1)*(n-2);
    else
    {
        if(n%3 != 0)
            ans = n*(n-1)*(n-3);
        else
            ans = (n-1)*(n-2)*(n-3);
    }

    cout<<ans<<endl;

    return 0;
}

