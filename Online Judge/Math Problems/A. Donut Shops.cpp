#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        ll a, b, c;
        sc("%lld%lld%lld", &a, &b, &c);
        if(a > c)
            cout<<-1<<" "<<b<<endl;
        else if(c > a && a*b == c)
            cout<<b+1<<" "<<-1<<endl;
        else if(a == c)
            cout<<-1<<" "<<b<<endl;
        else
            cout<<1<<" "<<b<<endl;
    }

    return 0;
}
