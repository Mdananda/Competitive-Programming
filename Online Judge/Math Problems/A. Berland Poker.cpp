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
        int nm, nk, mn, to, tmp, ans;
        sc("%d%d%d", &nm, &mn, &nk);

        to = nm/nk;

        if(to >= mn)
            cout<<mn<<endl;
        else
        {
            nk -= 1;
            tmp = mn-to;
            ans = tmp/nk;
            if(tmp%nk != 0)
                ans += 1;
            cout<<(to-ans)<<endl;
        }
    }

    return 0;
}

