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
        int nm, nk, cur = 0;
        sc("%d%d", &nm, &nk);

        vector<int> even, odd;

        for(int i = 1; i <= nm; ++i)
        {
            int x;
            sc("%d", &x);
            if(x%2 == 0)
                even.pb(x);
            else
                odd.pb(x);
        }

        if(odd.size() == 0)
            cur = 0;
        for(int i = 1; i <= nk; i += 2)
        {
            int np = nk-i;
            if(even.size() >= np && odd.size() >= i)
            {
                cur = 1;
                break;
            }
        }
        if(cur == 1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }


    return 0;
}
