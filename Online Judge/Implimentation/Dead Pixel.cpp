#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int ts;
    sc("%d", &ts);

    while(ts--)
    {
        int a, b, c, d, x, y, mx, mn;
        vector<int> vec;
        sc("%d%d%d%d", &a, &b, &x, &y);
        c = b-(y+1);
        d = a-(x+1);
        mx = a*c;
        vec.pb(mx);
        mn = a*y;
        vec.pb(mn);
        mx = d*b;
        vec.pb(mx);
        mn = x*b;
        vec.pb(mn);

        sort(vec.begin(), vec.end(), greater<int>());
        cout<<vec[0]<<endl;
    }

    return 0;
}
