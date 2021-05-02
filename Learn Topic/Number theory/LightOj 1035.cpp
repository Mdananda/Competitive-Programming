#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int ar[110];

int main()
{
    ll nm, num;
    cin>>num;
    for(int nmx = 2; nmx <= num; ++nmx)
    {
        nm = nmx;
        for(int i = 2; i <= nm; ++i)
        {
            while(nm%i == 0)
            {
                nm /= i;
                ar[i]++;
            }
        }
    }

    for(int i = 2; i <= 100; ++i)
    {
        if(ar[i])
            cout<<i<<" "<<ar[i]<<endl;
    }

    return 0;
}
