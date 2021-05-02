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
        int nm, i;
        sc("%d", &nm);

        vector<int> vec, odd, even;

        for(int i = 1; i <= nm; ++i)
        {
            int x;
            sc("%d", &x);
            vec.pb(x);
        }

        sort(vec.begin(), vec.end());

        for(i = 1; i < nm; )
        {
            int mn = vec[i]- vec[i-1];
            if(mn == 1)
            {
                i += 2;
            }
            else
            {
                if(vec[i-1]%2 == 0)
                    even.pb(vec[i-1]);
                else
                    odd.pb(vec[i-1]);
                i++;
            }
        }
        if(i == nm)
        {
            if(vec[i-1]%2 == 0)
                even.pb(vec[i-1]);
            else
                odd.pb(vec[i-1]);
        }

        cout<<odd.size()<<" "<<even.size()<<endl;
        if(odd.size()%2 != 0 || even.size()%2 != 0)
            cout<<"NO"<<endl;
        else
            cout<<"YES"<<endl;

    }

    return 0;
}
