#include <bits/stdc++.h>
using namespace std;

int e1, e2, od1, od2;
int main()
{
    int n, k;
    cin>>n>>k;

    for(int i = 1; i <= n; ++i)
    {
        int p;
        scanf("%d", &p);
        if(p%2 == 0)
            e1++;
        else
            od1++;
    }

    for(int i = 1; i <= k; ++i)
    {
        int p;
        scanf("%d", &p);
        if(p%2 == 0)
            e2++;
        else
            od2++;
    }

    int ans = min(e1, od2);
    ans += min(e2, od1);

    cout<<ans<<endl;

    return 0;
}
