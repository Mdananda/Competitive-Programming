#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int mod(string num, int a)
{
    int res = 0;
    for (int i = 0; i < num.length(); i++)
         res = (res*10 + (int)num[i] - '0') %a;

    return res;
}

int main()
{
    string num;
    cin>>num;
    if(mod(num, 4) == 0)
        cout<<4<<endl;
    else
        cout<<0<<endl;

    return 0;
}
