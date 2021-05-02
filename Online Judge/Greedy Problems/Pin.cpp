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
        vector<string> str;
        int n, ans = 0;
        sc("%d", &n);
        for(int i = 1; i <= n; ++i)
        {
            string s;
            cin>>s;
            str.pb(s);
        }


        cout<<ans<<endl;
        for(int i = 0; i < n; ++i)
            cout<<str[i]<<endl;
    }

    return 0;
}
