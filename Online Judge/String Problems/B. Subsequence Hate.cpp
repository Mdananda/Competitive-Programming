#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int ts, sz, ans;
    cin>>ts;

    while(ts--)
    {
        vector<int> vc;
        string ss;
        cin>>ss;
        sz = ss.size();
        ans = sz;

        for(int i = 0; i < sz; ++i)
        {
            int o1, o2, z1, z2;
            o1 = o2 = z1 = z2 = 0;

            for(int j = 0; j < i; ++j)
            {
                if(ss[j] == '1')
                    o1++;
                else
                    z1++;
            }

            for(int k = i; k < sz; ++k)
            {
                if(ss[k] == '1')
                    o2++;
                else
                    z2++;
            }

            ans = min(o1, z1)+min(o2, z2);
            ///ans = min(z1+o2, o1+z2);
            vc.pb(ans);
        }

        sort(vc.begin(), vc.end());
        cout<<vc[0]<<endl;
    }


    return 0;
}
