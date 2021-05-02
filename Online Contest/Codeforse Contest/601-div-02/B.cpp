#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf prinf
#define pb push_back

int main()
{
    int t;
    sc("%d", &t);
    while(t--)
    {
        int n, k;
        sc("%d%d", &n, &k);
        vector <int> vec;
        vector<int> sm;

        for(int i = 1; i <= n; ++i)
        {
            int x;
            sc("%d", &x);
            vec.pb(x);
        }

        if(k < n || n == 2)
        {
            cout<<-1<<endl;
            continue;
        }

        ll sum = 0;
        sum = (vec[0]+vec[n-1]);
        sm.pb(sum);
        for(int i = 1; i < n; ++i)
        {
            sum = (vec[i]+vec[i-1]);
            sm.pb(sum);
        }
        sum = 0;
        int indx = 0, mn = sm[0];

        for(int i = 1; i < sm.size(); ++i)
        {
            if(sm[i] < mn)
            {
                indx = i;
                mn = sm[i];
            }

        }

        for(int i = 0; i < sm.size(); ++i)
            sum += sm[i];
        for(int i = n; i < k; ++i)
            sum += mn;

        cout<<sum<<endl;
        for(int i = 1; i < n; ++i)
        {
            cout<<i<<" "<<i+1<<endl;
        }
        cout<<n<<" "<<1<<endl;

        for(int i = n; i < k; ++i)
        {
            if(indx == 0)
                cout<<1<<" "<<n<<endl;
            else
                cout<<indx<<" "<<indx+1<<endl;
        }

    }

    return 0;
}

