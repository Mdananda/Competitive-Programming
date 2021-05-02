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
        vector<int> vc;
        for(int i = 1; i <= 3; ++i)
        {
            int x;
            cin>>x;
            vc.pb(x);
        }
        sort(vc.begin(), vc.end(), greater<int>());
        if(vc[0] == vc[1])
        {
            cout<<"YES"<<endl;
            cout<<vc[2]<<" "<<vc[2]<<" "<<vc[0]<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
