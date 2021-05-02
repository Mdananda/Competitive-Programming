#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, k, c = 0;
        scanf("%d%d", &n, &k);
        int ar[n];
        vector<int>v;
        for(int i = 0; i < n; ++i)
        {
            scanf("%d", &ar[i]);
            if(ar[i] % 2 == 1)
            {
                v.push_back(i+1);
                c++;
            }
        }
        if(c%k == 0 && (c/k)%2 == 1)
        {
            cout<<"YES"<<endl;
            int j = -1,  r = c/k;
            for(int i = 0; i < k; ++i)
            {
                j += r;
                if(i == k-1 && j != n)
                    cout<<n;
                else
                    printf("%d ", v[j]);
            }
            cout<<endl;

        }
        else
            cout<<"NO"<<endl;
        v.empty();
    }


    return 0;
}
