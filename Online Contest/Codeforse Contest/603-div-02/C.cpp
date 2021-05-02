#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

const ll mx = 1e6+7;

#define sc scanf
#define pf printf
#define pb push_back

vector <int> prime;
bool isprime[mx];

void seive()
{
    for(int i = 2; i <= mx; ++i)
    {
        if(isprime[i])
            continue;
        for(int j = i; j <= mx; j += i)
            isprime[j] = 1;
        prime.pb(i);
    }
}

int main()
{
    /// seive();
    int t;
    cin>>t;
    while(t--)
    {
        ll n, sq;
        sc("%lld", &n);
        sq = sqrt(n)+1;
        vector <int> vec;
        vec.pb(0);
        vec.pb(1);
        vec.pb(n);
        for(int i = 1; i < sq; ++i)
        {
            vec.pb(i);
            ll num = n/i;
            vec.pb(num);
        }

        set<int> st(vec.begin(), vec.end());

        cout<<st.size()<<endl;

        for(auto it = st.begin(); it != st.end(); ++it)
            cout<<*it<<" ";
        cout<<endl;
    }

    return 0;
}
