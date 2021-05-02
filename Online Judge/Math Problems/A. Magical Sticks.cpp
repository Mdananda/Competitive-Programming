#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    ll T, nm;
    cin>>T;

    while(T--)
    {
        sc("%lld", &nm);
        ll tmp = nm*(nm+1)/2;
        cout<<tmp/nm<<endl;
    }

    return 0;
}
