#include <bits/stdc++.h>
using namespace std;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int tc;
    cin>>tc;
    while(tc--)
    {
        int nm, np;
        cin>>nm>>np;
        vector<int> vc;
        for(int i = 1; i <= np; ++i)
        {
            int xx;
            sc("%d", &xx);
            vc.pb(xx);
        }

        for(int i = 0; i < np; ++i)
        {
            for(int j = i+1; j < np; ++j)
            {
                if(vc[i]+vc[j] == nm)
                {
                    cout<<i+1<<" "<<j+1<<endl;
                    break;
                }
            }
        }
    }

    return 0;
}
