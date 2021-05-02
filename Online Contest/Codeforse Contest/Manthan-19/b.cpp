#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans;
    cin>>n;
    int ar[n];

    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &ar[i]);
    }
    set<int> s(ar, ar+n);
    ans = n - s.size();

    cout<<ans<<endl;

    return 0;
}
