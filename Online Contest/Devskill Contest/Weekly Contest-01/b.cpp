#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll t, n, ans;
    cin>>t;

    while(t--)
    {
        cin>>n;
        ans = 0;
        for(int i = 1; i <= n; ++i)
        {
            if(n%i == 0)
                ans += n;
            else
                ans += (i*n);
        }
        cout<<ans<<endl;
    }


    return 0;
}


