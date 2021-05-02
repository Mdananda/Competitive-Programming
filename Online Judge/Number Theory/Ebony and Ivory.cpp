#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf

int main()
{
    ll a, b, c;
    cin>>a>>b>>c;

    if(c < a && c < b)
        cout<<"No"<<endl;
    else if(c%a == 0 || c%b == 0)
        cout<<"Yes"<<endl;
    else if((a%b)!=0 && (c%b)%(a%b) == 0)
        cout<<"Yes"<<endl;
    else if((b%a)!=0 &&(c%a)%(b%a) == 0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;

    return 0;
}

