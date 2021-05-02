#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

bool cmp(int a, int b)
{
    return (a>b);
}

int main()
{
    int n, k;
    cin>>n>>k;
    vector<int> vec, ans;

    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= k; ++j)
        {
            int x;
            sc("%d", &x);
            vec.pb(x);
        }
        sort(vec.begin(), vec.end());
        ans.pb(vec[0]);
        vec.clear();
    }

    sort(ans.begin(), ans.end(), cmp);
    cout<<ans[0]<<endl;

    return 0;
}
