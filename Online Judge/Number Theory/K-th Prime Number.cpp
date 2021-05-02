#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mx = 1e8+7;

#define sc scanf
#define pf printf
#define pb push_back

vector <int> prime;
bool isprime[mx];

void seive()
{
    for(int i = 2; i <= mx; ++i)
    {
        if(isprime[i] == 1)
            continue;
        for(int j = i; j <= mx; j += i)
            isprime[j] = 1;
        prime.pb(i);
    }
}

int main()
{
    seive();
    int ts;
    sc("%d", &ts);
    while(ts--)
    {
        int nm;
        sc("%d", &nm);
        nm = nm - 1;
        cout<<prime[nm]<<endl;
    }

    return 0;
}
