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
        int h, m, sm;
        sc("%d%d", &h, &m);
        sm = h*60 + m;
        sm = 1440-sm;
        cout<<sm<<endl;
    }


    return 0;
}
