#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf

int main()
{
    ll ts, ansx, ansy;
    cin>>ts;

    while(ts--)
    {
        int nm, np;
        cin>>nm;

        ansx = ansy = 0;

        np = nm/2;

        for(int i = 1; i < np; ++i)
            ansx += pow(2, i);
        ansx += pow(2, nm);

        for(int i = np; i < nm; ++i)
            ansy += pow(2, i);

        cout<<(ansx-ansy)<<endl;
    }

    return 0;
}
