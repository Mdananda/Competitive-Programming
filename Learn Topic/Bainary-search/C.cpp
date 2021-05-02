#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

vector <int> vec;
ll p1;

ll fnc(ll x)
{
    ll i, j, k = 0;
    for(i = 0; i < vec.size(); i++)
        if(vec[i] > x)
            return 0;
    for(i = 0; i < vec.size(); )
    {
        ll ans = 0;
        for(j = i; j < vec.size(); ++j)
        {
            ans += vec[j];
            if(ans> x)
                break;
        }
        i = j;
        k++;
    }
    if(k <= p1)
        return 1;
    else
        return 0;
}

int main()
{
    int n;
    cin>>n>>p1;
    for(int i = 1; i <= n; ++i)
    {
        int p;
        scanf("%d", &p);
        vec.push_back(p);
    }
    int lo = 1, hi = 10e7;
    while(hi-lo > 1)
    {
        int mid = (hi+lo)/2;
        int midval = fnc(mid);
        if(midval == 1)
            hi = mid;
        else
            lo = mid;
    }
    if(fnc(hi) == 1)
        cout<<hi<<endl;
    else
        cout<<lo<<endl;


    return 0;
}
