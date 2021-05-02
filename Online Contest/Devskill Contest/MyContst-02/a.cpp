#include <bits/stdc++.h>
using namespace std;
typedef long long ll;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        ll a, b, c, p, ans = 0;
        cin>>a>>b>>c;
        p = a + b + c;

        p = p / 2;
        if(p < a)
        {
            cout<<c+1<<endl;
            continue;
        }
        a += c;
        p = a - p;
        ans += p;
        if(ans < 0)
            ans = 0;

        cout<<ans<<endl;
    }

    return 0;
}
