#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int ts;
    cin>>ts;
    while(ts--)
    {
        vector<ll> vec;
        for(int i = 1; i <= 3; ++i)
        {
            ll x;
            cin>>x;
            vec.pb(x);
        }

        sort(vec.begin(), vec.end());

        ll cm = vec[0]+vec[1]+1;

        if(cm < vec[2])
            cout<<"No"<<endl;
        else
            cout<<"Yes"<<endl;
    }

    return 0;
}

