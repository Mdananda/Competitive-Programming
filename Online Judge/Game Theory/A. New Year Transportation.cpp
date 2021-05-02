#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf pritnf
#define pb push_back

int ar[100010];

int main()
{
    int nm, np;
    cin>>nm>>np;
    vector<int> vc;

    for(int i = 1; i < nm; ++i)
        cin>>ar[i];

    vc.pb(1);
    for(int i = 1; i < nm; )
    {
        i += ar[i];
        vc.pb(i);
    }

    if(binary_search(vc.begin(), vc.end(), np))
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
