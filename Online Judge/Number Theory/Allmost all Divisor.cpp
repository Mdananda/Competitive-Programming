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
        int n, p;
        vector<int> vec;
        sc("%d", &n);
        for(int i = 1; i <= n; ++i)
        {
            int x;
            sc("%d", &x);
            vec.pb(x);
        }

        sort(vec.begin(), vec.end());
        ll ans = vec[0]*vec[n-1];

        vector<int>ck;
        for(int i = 2; i*i <= ans; ++i)
        {
            if(ans%i == 0)
            {
                ck.pb(i);
                if(i != (ans/i))
                    ck.pb((ans/i));
            }
        }

        sort(ck.begin(), ck.end());
        if(ck == vec)
            cout<<ans<<endl;
        else
            cout<<-1<<endl;
    }

    return 0;
}
