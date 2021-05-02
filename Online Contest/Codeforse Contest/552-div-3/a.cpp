#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    ll ar[4];
    ll a, b, c;

    for(int i = 0; i < 4; ++i)
        cin>>ar[i];

    sort(ar, ar+4);

    a = ar[3] - ar[0];
    b = ar[3] - ar[1];
    c = ar[3] - ar[2];

    cout<<a<<" "<<b<<" "<<c<<endl;

    return 0;
}
