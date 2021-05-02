#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back


int main()
{
    int T, cur, sz, tc = 1;
    sc("%d", &T);
    while(T--)
    {
        pf("Case %d:\n", tc);
        string vc[10000];
        char ss[100], url[100];
        sc("%s", ss);
        vc[0] = ss;
        sz = cur = 0;
        while(true)
        {
            sc("%s", ss);
            if(ss == "VISIT")
            {
                sc("%s", url);
                sz = ++cur;
                vc[cur] = url;
            }
            else if(ss == "BACK")
            {
                cur--;
                if(cur >= 0)
                    cout<<vc[cur]<<endl;
                else
                {
                    cur = 0;
                    pf("Ignored\n");
                }
            }
            else if(ss == "FORWARD")
            {
                cur++;
                if(cur <= sz)
                    cout<<vc[cur]<<endl;
                else
                    pf("Ignored\n");

            }
            else if(ss == "QUIT")
                break;
        }
        tc++;
    }

    return 0;
}
