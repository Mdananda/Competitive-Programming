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
        int n;
        sc("%d", &n);
        vector<int>a, b, c;

        for(int i = 1; i <= n; ++i)
        {
            int x;
            sc("%d", &x);
            a.pb(x);
        }

        for(int i = 1; i <= n; ++i)
        {
            int x;
            sc("%d", &x);
            b.pb(x);
        }

        for(int i = 0; i < n; ++i)
        {
            int p = b[i]-a[i];
            if(p != 0)
            {
                c.pb(i);
            }
        }
        if(c.empty())
        {
            cout<<"YES"<<endl;
            continue;
        }
        int i, l, r;
        l = c[0];
        r = c[c.size()-1];
        c.clear();

        for(i = l; i <= r; ++i)
        {
            int p = b[i]-a[i];
            if(p >= 0)
            {
                c.pb(p);
            }
            else
                break;
        }
        if(i != (r+1))
        {
            cout<<"NO"<<endl;
            continue;
        }
        set<int>s(c.begin(), c.end());

        if(s.size() == 1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }

    return 0;
}
