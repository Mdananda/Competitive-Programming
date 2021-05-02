#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf

int main()
{
    ll a, b;
    cin>>a>>b;

    while(a >= 2*b || b >= 2*a)
    {
        if(a == 0 || b == 0)
            break;
        else if(a >= 2*b)
        {
            ll tmp = a/b;
           /// cout<<tmp<<endl;
            if(tmp%2 == 0)
                a -= tmp*b;
            else
                a -= (tmp-1)*b;
        }
        else
        {
            ll tmp = b/a;
            if(tmp%2 == 0)
                b -= tmp*a;
            else
                b -= (tmp-1)*a;
        }
    }

    cout<<a<<" "<<b<<endl;

    return 0;
}
