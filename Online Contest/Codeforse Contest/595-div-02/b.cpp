#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define sc scanf

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, ans, k, p;
        cin>>n;
        vector<int>vec;

        for(int i = 0; i < n; ++i)
        {
            int x;
            sc("%d", &x);
            vec.pb(x);
        }

        for(int k = 1; k <= n; ++k)
        {
            ans = 1;
            p = vec[k-1];

            while(p != k)
            {
                ans++;
                p = vec[p-1];
            }
            cout<<ans<<" ";
        }
        cout<<endl;
    }


    return 0;
}
