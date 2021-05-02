#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    scanf("%d", &n);
    int ar[n];

    for(int i = 0; i < n; ++i)
        scanf("%d", &ar[i]);
    sort(ar, ar+n);
    int p = ar[n-1];
    cout<<p;

    vector<int>v;
    for(int i = 0; i < n; ++i)
    {
        if(p%ar[i] != 0)
        {
            v.push_back(ar[i]);
        }
    }
    sort(v.begin(), v.end(), greater <int>());
    if(v.size() > 0)
        cout<<" "<<v[0]<<endl;
    else
    {
        int k;
        for(int i = 0; i < n-1; ++i)
        {
            if(ar[i] == ar[i+1])
                k = ar[i];
        }
         cout<<" "<<k<<endl;
    }
    return 0;
}
