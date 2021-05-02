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
        int n, mx, mm;
        sc("%d", &n);
        map<int, int> mp;

        for(int i = 1; i <= n; ++i)
        {
            int x;
            sc("%d", &x);
            mp[x] = i;
        }
        mm = mp[1];
        mx = mp[1];
        cout<<1;
        for(ll i = 2; i <= n; ++i)
        {
            mx = max(mx, mp[i]);
            mm = min(mm, mp[i]);
            if((mx-mm)+1 == i)
                cout<<1;
            else
                cout<<0;
        }
        cout<<endl;
    }



    return 0;
}
