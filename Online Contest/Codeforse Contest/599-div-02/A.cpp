#include <bits/stdc++.h>
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
        int n;
        sc("%d", &n);
        vector <int> vec;

        for(int i = 0; i < n; ++i)
        {
            int x;
            sc("%d", &x);
            vec.pb(x);
        }

        sort(vec.begin(), vec.end(), greater<int>());

        ll i, ans = 1;
        for(i = 0; i < n; i++)
        {
            if(vec[i] >= ans)
                ans++;
            else
                break;

        }
        cout<<i<<endl;
    }

    return 0;
}
