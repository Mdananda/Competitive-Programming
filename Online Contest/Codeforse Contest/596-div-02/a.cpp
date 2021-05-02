#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pb push_back

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k, d;
        cin>>n>>k>>d;
        vector <int> vec;
        vector <int>ans;

        for(int i = 0; i < n; ++i)
        {
            int x;
            sc("%d", &x);
            vec.pb(x);
        }

        for(int i = 0; i < n; ++i)
        {
            if(i+d <= n)
            {
                set<int>s(vec.begin()+i, vec.begin()+(i+d));
                ans.pb(s.size());
            }
        }
        sort(ans.begin(), ans.end());
        cout<<ans[0]<<endl;
    }


    return 0;
}

