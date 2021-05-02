#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf printf
#define pb push_back

int isprime[3100];
vector<int> prime;

void seive(int n)
{
    for(int i = 2; i <= n; ++i)
    {
        if(isprime[i] == 1)
            continue;
        for(int j = i; j <= n; j += i)
        {
            isprime[j] = 1;
        }
        prime.pb(i);
    }
}

int main()
{
    vector<int> vec;
    int n;
    sc("%d", &n);
    seive(n);

    for(int i = 0; i < prime.size(); ++i)
    {
        ll pm, p = prime[i];
        while(p <= n)
        {
            for(int j = 0; j < prime.size(); ++j)
            {
                pm = prime[j];
                if(i == j)
                    continue;
                ll px = p*pm;
                if(px <= n)
                {
                    while(px <= n)
                    {
                        pm *= prime[j];
                        vec.pb(px);
                        px = p*pm;
                    }
                }
                else
                    break;
            }
            /// cout<<p<<endl;
            p *= prime[i];
        }
    }

    set<int> st(vec.begin(), vec.end());
    set<int>:: iterator it;
    cout<<st.size()<<endl;

//    for(it = st.begin(); it != st.end(); ++it)
//        cout<<*it<<endl;

    return 0;
}
