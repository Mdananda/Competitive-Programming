#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9+7;

#define sc scanf
#define pf printf
#define pb push_back

ll cnt(ll n)
{
    ///vector<int>vec(n+1, 0);
    ll ans = 0;
    for(int i = 1; i <= n; ++i)
    {
        for(int j = i*i; j <= n; j += i)
            ans++;
    }

    return ans;
}

int main()
{
   /// pf("For the input data:\n");
    int n;
    cin>>n;

    ///pf("the correct result is:\n");

    cout<<cnt(n)<<endl;

    return 0;
}
