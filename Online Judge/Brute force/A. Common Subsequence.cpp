#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int ar[1010], arr[1010], chk[1010] = {0};
        vector<int> vc;
        int nm, np;
        cin>>nm>>np;
        for(int i = 1; i <= nm; ++i)
        {
            cin>>ar[i];
            chk[ar[i]] = 1;
        }
        for(int i = 1; i <= np; ++i)
        {
            cin>>arr[i];
            if(chk[arr[i]] == 1)
                vc.pb(arr[i]);
        }
        if(!vc.empty())
        {
            cout<<"YES"<<endl;
            cout<<"1"<<" "<<vc[0]<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
