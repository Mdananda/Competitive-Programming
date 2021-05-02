#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mod = 1e7+9;

#define sc scanf
#define pf printf
#define pb push_back


int main()
{
    ll n, k;
    sc("%lld%lld", &n, &k);
    char s[110][110];

    for(int i = 0; i < n; ++i)
    {
        cin>>s[i];
    }

    vector<int>ans;
    for(int i = 0; i < k; ++i)
    {
        vector<char>vec;
        int in = 0;
        for(int j = 0; j < n; ++j)
        {
            vec.pb(s[j][i]);
        }
        char ch = '0';
        for(int i = 0; i < vec.size(); ++i)
        {
            if(vec[i] >= ch){
                ch = vec[i];
                in = i;
            }
        }
       /// cout<<in<<endl;

        for(int p = 0; p < vec.size(); ++p)
        {
            if(vec[p] >= vec[in])
                ans.pb(p+1);
        }

    }

    ///cout<<ans.size()<<endl;
    set<int>ss(ans.begin(), ans.end());

    cout<<ss.size()<<endl;

    return 0;
}


