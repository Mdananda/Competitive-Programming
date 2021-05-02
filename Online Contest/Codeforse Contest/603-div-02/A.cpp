#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector <ll> vec;
        for(int i = 1; i <= 3; ++i)
        {
            ll x;
            sc("%lld", &x);
            vec.pb(x);
        }

        sort(vec.begin(), vec.end());

        ll mx = vec[2]-vec[1];
        ll mn = min(mx, vec[0]);
        vec[1] += mn;
        vec[0] -= mn;
        ll p = (vec[0]+1)/2;
        ll q = vec[0]-p;

        vec[1] += p;
        vec[2] += q;

        cout<<min(vec[1], vec[2])<<endl;

    }



    return 0;
}
