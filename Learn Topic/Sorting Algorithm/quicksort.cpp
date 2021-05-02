#include <bits/stdc++.h>
using namespace std;

vector<int>v;
int main()
{
    int n, p, t;
    scanf("%d", &t);

    while(t--)
    {
        scanf("%d%d", &n, &p);
        cout<<p<<endl;
        int ar[n+10], cnt[n+10] = {0};
        for(int i = 1; i <= n; ++i)
        {
            scanf("%d", &ar[i]);
            cnt[ar[i]]++;
            if(p == i)
                p = ar[i];
        }
        cout<<p<<endl;
                for(int i = 1; i <= n; ++i)
        {
            int tmp = cnt[i];
            for(int j = 1; j <= tmp; ++j)
            {
                v.push_back(i);
            }
        }

        for(int i = 0; i < v.size(); ++i)
        {
            if(p == v[i])
            {
                cout<<i+1<<endl;
                break;
            }
        }

    }

    cout<<p<<endl;

    return 0;
}




