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
        ll nm, cnt = 0;
        cin>>nm;
        for(ll i = 1; i <= 9; ++i)
        {
            ll dv = i, px = 10;
            while(nm/dv)
            {
                cnt++;
                dv = dv + (i*px);
                px = px*10;
            }
        }

        cout<<cnt<<endl;
    }

    return 0;
}
