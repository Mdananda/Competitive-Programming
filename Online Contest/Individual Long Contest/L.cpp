#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf pritnf
#define pb push_back

int ar[100010];

int main()
{
    int nm, np, tmp, dis, x, cmp = 0;
    cin>>nm>>np;

    for(int i = 1; i <= nm; ++i)
    {
        sc("%d", &x);
        ar[i] = ar[i-1] + x;
    }

    for(int i = 1; i <= nm; ++i)
    {
        tmp = ar[i-1]+np;
        dis = lower_bound(ar, (ar+nm+1), tmp)-(ar+i);
        if(dis >= cmp)
            cmp = dis;
    }

    cout<<cmp<<endl;

    return 0;
}
