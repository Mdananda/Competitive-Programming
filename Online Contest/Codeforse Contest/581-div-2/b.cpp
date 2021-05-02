#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll ans1, ans2;
int main()
{
    int i, n, l, r;
    scanf("%d%d%d", &n, &l, &r);

    for(i = 1; i < l; ++i)
        ans1 += pow(2, i);
    ans1 += (n-l+1);

    for(i = 1; i < n && i < r; ++i)
    {
        ans2 += pow(2, i);
    }
    if(i != n)
    {
        ll p = pow(2, (i-1));
        for(i = i; i < n; ++i)
            ans2 += p;

    }
    cout<<ans1<<" "<<ans2+1<<endl;


    return 0;
}

