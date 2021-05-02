#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    ll n;
    sc("%lld", &n);
    if(n <= 2)
        cout<<"-1"<<endl;
    else if(n == 3)
        cout<<210<<endl;
    else
    {
        int md = 1;

        for(int i = 1; i < n; ++i)
        {
            md = md*10;
            md = md%210;
        }

        md = 210 - md;
        cout<<"1";
        if(md >= 100)
        {
            for(int i = 1; i < n-3; ++i)
                cout<<"0";
            cout<<md<<endl;
            return 0;
        }

        for(int i = 1; i < n-2; ++i)
            cout<<"0";
        cout<<md<<endl;
    }

    return 0;
}
