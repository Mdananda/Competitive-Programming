#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

bool isprime[110];
vector<int> prime[110];

void seive()
{
    for(int i = 2; i <= 100; ++i)
    {
        if(isprime[i])
            continue;
        for(int j = 2*i; j <= 100; j += i)
        {
            isprime[j] = 1;
            prime[j].pb(i);
        }
        prime[i].pb(i);
    }
}

int main()
{
    seive();
    int T, nm, np, tmp;
    cin>>T;
    while(T--)
    {
        vector<int> vc;
        queue<int> qu;
        cin>>nm>>np;
        qu.push(nm);
        while(!qu.empty())
        {
            int nx = qu.front();
            qu.pop();
            for(int i = 0; i < prime[nx].size(); ++i)
            {
                tmp = nx+prime[nx][i];
                if(tmp > np)
                    continue;
                qu.push(tmp);
                vc.pb(tmp);
            }
        }
        sort(vc.begin(), vc.end());
        if(binary_search(vc.begin(), vc.end(), np))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    return 0;
}
