#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll fnc(int a, int b, int n)
{
    if(n == 0)
        return a;
    if(n == 1)
        return b;

    ll ans = fnc(a, b, (n-1)%3) ^ fnc(a, b, (n-2)%3);

    return ans;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, n;
        cin>>a>>b>>n;
        cout<<fnc(a, b, n)<<endl;
    }

    return 0;
}
