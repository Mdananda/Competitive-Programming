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
        ll nm, tmp, ans = 0;
        sc("%lld", &nm);
        while(1)
        {
            tmp = nm%6;
            if(tmp == 0)
                nm = nm/6;
            else if(tmp == 1 || tmp == 2 || tmp == 5)
                break;
            else
                nm = nm*2;
            ans++;
        }
        if(nm == 1)
            cout<<ans<<endl;
        else
            cout<<-1<<endl;
    }


    return 0;
}
