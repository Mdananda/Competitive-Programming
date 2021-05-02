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
        int nm, mn;
        sc("%d", &nm);
        vector<int> vec, ans;

        for(int i = 1; i <= nm; ++i)
        {
            int x;
            sc("%d", &x);
            vec.pb(x);
        }

        sort(vec.begin(), vec.end());


        for(int i = 1; i < nm; ++i)
        {
            mn = vec[i]- vec[i-1];
            ans.pb(mn);
        }

        sort(ans.begin(), ans.end());

        cout<<ans[0]<<endl;
    }



    return 0;
}
