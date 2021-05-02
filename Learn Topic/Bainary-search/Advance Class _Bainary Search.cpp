#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int lo = 0, hi = 10, tmp;
    int nm, np;
    cin>>nm>>np;

    while((hi-lo) > 1)
    {
        int md = (lo+hi)/2;
        tmp = nm/md;
        if(nm%md != 0)
            tmp += 1;
      ///  cout<<tmp<<endl;
        if(tmp <= np)
            hi = md;
        else if(np < tmp)
            lo = md+1;
    }

    tmp = nm/lo;
    if(nm%lo != 0)
        tmp += 1;
    if(tmp <= np)
        cout<<lo<<endl;
    else
        cout<<hi<<endl;

    return 0;
}
