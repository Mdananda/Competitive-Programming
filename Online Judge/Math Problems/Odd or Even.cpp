#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    int ts;
    cin>>ts;
    while(ts--)
    {
        ll a, b, dis;
        scanf("%lld%lld", &a, &b);

        if(a < b)
        {
            dis = b-a;
            if(dis%2 == 0)
                cout<<2<<endl;
            else
                cout<<1<<endl;
        }
        else if(a > b)
        {
            dis = a-b;
            if(dis%2 == 0)
                cout<<1<<endl;
            else
                cout<<2<<endl;
        }
        else
            cout<<0<<endl;
    }


    return 0;
}
