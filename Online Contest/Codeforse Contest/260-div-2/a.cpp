#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, a, b;
    cin>>n;
    multimap<ll, ll>mp;
    multimap<ll, ll>:: iterator it;
    for(ll i = 1; i <= n; ++i)
    {
        cin>>a>>b;
        mp.insert(make_pair(a, b));
    }

    for(it = mp.begin(); ; )
    {
        a = it->first;
        b = it->second;
        it++;
        if(it == mp.end())
            break;

        if(a < it->first && b > it->second)
        {
            ///cout<<a<<" "<<b<<endl;
                cout<<"Happy Alex"<<endl;
           /// cout<<"Poor Alex"<<endl;
            return 0;
        }
    }

cout<<"Poor Alex"<<endl;

    return 0;
}

