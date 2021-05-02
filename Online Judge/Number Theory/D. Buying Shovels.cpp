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
        ll nm, mn, sz, np, ans = 0;
        sc("%lld%lld", &nm, &mn);

        sz = sqrt(nm)+1;

        for(int i = 1; i <= sz; ++i)
        {
            if(nm%i == 0)
            {
                np = nm/i;
                if(np <= mn && np >= ans)
                    ans = np;
                else if(i <= mn && i >= ans)
                    ans = i;

                ///  cout<<ans<<endl;
            }
        }

        cout<<(nm/ans)<<endl;
    }


    return 0;
}
