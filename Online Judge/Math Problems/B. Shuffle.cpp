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
        int na, nb, nx;
        sc("%d%d%d", &na, &nb, &nx);

        for(int i = 1; i <= nx; ++i)
        {
            int a, b;
            sc("%d%d", &a, &b);
            if(a <= nb && nb <= b)
                nb = b;
        }

        cout<<nb<<endl;
    }

    return 0;
}
