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
        int nm, ans, np = 10;
        vector<int> vec;
        sc("%d", &nm);
        while(nm > 0)
        {
            ans = nm%np;
            if(ans == 0)
                np *= 10;
            else
            {
                nm = nm-ans;
                vec.pb(ans);
                np = 10;
            }
        }
        cout<<vec.size()<<endl;
        for(int i = 0; i < vec.size(); ++i)
            cout<<vec[i]<<" ";
        cout<<endl;
        vec.clear();
    }

    return 0;
}

