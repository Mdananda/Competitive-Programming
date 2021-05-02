#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf pritnf
#define pb push_back

int main()
{
    int nm, np, cur = 0;
    cin>>nm>>np;

    while(nm != np)
    {
        if(nm < np && np%2 == 0)
            np = np/2;
        else if(nm < np && np%2 == 1)
            np = np+1;
        else if(nm > np)
            np = np + 1;
        cur++;
    }
    cout<<cur<<endl;

    return 0;
}
