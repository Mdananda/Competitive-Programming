#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int n;
    sc("%d", &n);
    vector <int> odd, even;

    for(int i = 1; i <= n; ++i)
    {
        int x;
        sc("%d", &x);
        if(x%2 == 0)
            even.pb(x);
        else
            odd.pb(x);
    }

    sort(odd.begin(), odd.end(), greater<int>());
    sort(even.begin(), even.end(), greater<int>());
    ll ans = 0;

    if(!odd.empty())
    {
        for(int i = 0; i < odd.size()-1; ++i)
        {
            ans += odd[i];
        }
    }
    if(!even.empty())
    {
        for(int i = 0; i < even.size()-1; ++i)
        {
            ans += even[i];
        }
    }

    if(ans%2 == 0)
    {
        if(!odd.empty())
        {
            int l = odd.size()-1;
            ans += odd[l];
        }
        if(!even.empty())
        {
            int ln = even.size()-1;
            if(ans%2 == 1)
                ans += even[ln];
        }
    }
    else if(ans%2 == 1)
    {
        if(!even.empty())
        {
            int l = even.size()-1;
            ans += even[l];
        }
        if(!odd.empty())
        {
            int ln = odd.size()-1;
            if(ans%2 == 0)
                ans += odd[ln];
        }
    }

    if(ans%2 == 1)
        cout<<ans<<endl;
    else
        cout<<0<<endl;

    return 0;
}
