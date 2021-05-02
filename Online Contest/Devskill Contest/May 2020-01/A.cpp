#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf

int main()
{
    int ts;
    cin>>ts;

    while(ts--)
    {
        int nm, nk, mp, nn;
        sc("%d%d", &nm, &nk);

        mp = max(nm, nk);
        nn = min(nm*2, nk*2);
        mp = max(mp, nn);

        cout<<(mp*mp)<<endl;
    }


    return 0;
}


