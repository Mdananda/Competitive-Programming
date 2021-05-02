#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e9+7;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll i, j, n, k, p = 0;
        vector <int> vec;
        string s;
        char ans[110000];
        sc("%I64d%I64d", &n, &k);
        cin>>s;

        for(i = 0; i < n; ++i)
        {
            if(s[i] == '0')
            {
                if(i-p <= k)
                {
                    ans[p] = '0';
                    k = k - (i-p);
                    vec.pb(p);
                    p++;
                }
                else
                {
                    p = i-k;
                    ans[p] = '0';
                    vec.pb(p);
                    break;
                }
            }
        }
        if(vec.size() != 0)
        {
            int x = 0;
            for(j = 0; j <= i; ++j)
            {

                if(j == vec[x])
                {
                    x++;
                    if(x >= vec.size())
                        x = 0;
                    continue;
                }
                ans[j] = '1';
                /// cout<<ans[j]<<endl;
            }

            for(i = 0; i < j; ++i)
            {
                s[i] = ans[i];
                ///cout<<ans[j]<<endl;
            }

        }
         cout<<s<<endl;
    }



}
