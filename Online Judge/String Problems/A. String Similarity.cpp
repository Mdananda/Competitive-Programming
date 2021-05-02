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
        int nm;
        cin>>nm;
        string ss;
        cin>>ss;
        for(int i = 0; i < 2*nm; i += 2)
            cout<<ss[i];
        cout<<endl;
    }

    return 0;
}
