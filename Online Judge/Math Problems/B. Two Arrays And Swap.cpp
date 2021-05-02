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
        int nm, nk, ans = 0;
        sc("%d%d", &nm, &nk);
        vector<int> aa, bb;

        for(int i = 1; i <= nm; ++i)
        {
            int x;
            sc("%d", &x);
            aa.pb(x);
        }

        for(int i = 1; i <= nm; ++i)
        {
            int x;
            sc("%d", &x);
            bb.pb(x);
        }

        sort(aa.begin(), aa.end());
        sort(bb.begin(), bb.end(), greater<int>());

        for(int i = 0; i < nk; ++i)
        {
            ans += max(aa[i], bb[i]);
        }

        for(int i = nk; i < nm; ++i)
            ans += aa[i];
        cout<<ans<<endl;
    }

    return 0;
}
