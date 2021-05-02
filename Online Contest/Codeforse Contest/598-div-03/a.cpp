#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define sc scanf

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a, b, n, s, p, ans, k;
        cin>>a>>b>>n>>s;

        p = s/n;
        p = min(p, a);
        ans = p*n;
        k = s - ans;
        ///cout<<k<<endl;
        if(k <= b)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }


    return 0;
}
