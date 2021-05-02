#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int nm;
    sc("%d", &nm);
    while(nm > 0)
    {
        vector<int> vc;
        for(int i = 1; i <= nm; ++i)
        {
            int x;
            sc("%d", &x);
            vc.pb(x);
        }
        sort(vc.begin(), vc.end());
        for(int i = 0; i < nm-1; ++i)
        {
            pf("%d ", vc[i]);
        }
        pf("%d\n", vc[nm-1]);
        sc("%d", &nm);
    }

    return 0;
}
