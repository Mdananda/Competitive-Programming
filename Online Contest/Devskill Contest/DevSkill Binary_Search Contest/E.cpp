#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int ar[] = {1, 4, 6, 7};
    int lo, hi, nm;
  //  cin>>nm;
    lo = 0;
    hi = 3;

    auto pos = upper_bound(ar, ar+4, 4);
    cout<<*pos<<endl;

    /*
    while((hi-lo) > 1)
    {
        int md = (lo+hi)/2;
        if(ar[md] >= nm)
            hi = md;
        else
            lo = md;
    }
    if(ar[hi] < nm)
        cout<<ar[hi]<<endl;
    else
        cout<<ar[lo]<<endl;
        */

    return 0;
}
