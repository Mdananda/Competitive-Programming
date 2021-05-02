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
        int ln, cur = 0;
        vector <int> vec;
        sc("%d", &ln);
        string nm;
        cin>>nm;

        for(int i = 0; i < ln; ++i)
        {
            if(nm[i] == 'A')
            {
                vec.pb(i);
            }
        }
        vec.pb(ln);

        for(int i = 1; i < vec.size(); ++i)
        {
            int ds = (vec[i]-vec[i-1])-1;
            if(ds >= cur)
                cur = ds;
        }

        cout<<cur<<endl;
    }

    return 0;
}
