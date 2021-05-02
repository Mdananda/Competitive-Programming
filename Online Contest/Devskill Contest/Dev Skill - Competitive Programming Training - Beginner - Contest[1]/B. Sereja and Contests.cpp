#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int ansx = 1, ansy, arr[4040];

int main()
{
    int nm, mn, px;
    sc("%d%d", &nm, &mn);

    for(int i = 1; i <= mn; ++i)
    {
        int x, y;
        sc("%d", &px);
        if(px == 1)
        {
            sc("%d%d", &x, &y);
            arr[x] = 1;
            arr[y] = 1;
            ansx += 2;
        }
        else
        {
            sc("%d", &x);
            arr[x] = 1;
            ansx += 1;
        }
    }

    for(int i = 2; i <= nm; )
    {
        if(arr[i] == 0 && arr[i-1] == 0)
        {
            i++;
            ansy++;
        }
        else if(arr[i-1] == 0)
            ansy++;
        i++;
    }

    cout<<ansy<<" "<<(nm-ansx)<<endl;

    return 0;
}
