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
        ll lx, rx, uy, dy, mx, my;
        string s, ans;
        cin>>s;
        lx = rx = uy = dy = 0;

        for(int i = 0; i < s.size(); ++i)
        {
            if(s[i] == 'L')
                lx++;
            else if(s[i] == 'R')
                rx++;
            else if(s[i] == 'U')
                uy++;
            else if(s[i] == 'D')
                dy++;
        }

        mx = min(lx, rx);
        my = min(uy, dy);
        if(mx > 0 && my > 0)
        {
            for(int i = 1; i <= my; ++i)
                ans.pb('U');
            for(int i = 1; i <= mx; ++i)
                ans.pb('R');
            for(int i = 1; i <= my; ++i)
                ans.pb('D');
            for(int i = 1; i <= mx; ++i)
                ans.pb('L');
        }
        else if(mx == 0 && my > 0)
        {
            ans = "UD";
        }
        else if(my == 0 && mx > 0)
        {
            ans = "LR";
        }
        cout<<ans.size()<<"\n"<<ans<<endl;
    }

    return 0;
}
