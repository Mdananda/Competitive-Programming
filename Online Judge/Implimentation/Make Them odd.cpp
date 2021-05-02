#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int ts;
    cin>>ts;
    while(ts--)
    {
        int n, cnt = 0;
        sc("%d", &n);
        set<int> nn;

        for(int i = 1; i <= n; ++i)
        {
            int x;
            sc("%d", &x);
            if(x%2 == 0)
            {
                nn.insert(x);
            }
        }

        while(!nn.empty())
        {
            auto it = nn.rbegin();
            int nm = *it/2;
            nn.erase(*it);
            while(nm > 0)
            {
                auto itt = nn.find(nm);
                if(itt != nn.end())
                    nn.erase(*itt);
                cnt++;
                if(nm%2 == 0)
                    nm = nm/2;
                else
                    break;
            }
        }
        cout<<cnt<<endl;
    }

    return 0;
}

