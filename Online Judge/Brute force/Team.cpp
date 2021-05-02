#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf

int main()
{
    int n, ans = 0;
    cin>>n;

    for(int i = 1; i <= n; ++i)
    {
        int x, y, z;
        cin>>x>>y>>z;

        if((x+y+z) >= 2)
            ans++;
    }
    cout<<ans<<endl;

    return 0;
}

