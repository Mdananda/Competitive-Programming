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
        int n;
        sc("%d", &n);
        map<int, int> mp;
        vector <int> vec;
        vector<int> ck(n+1, 0);
        queue<int> qu;
        bool ok = true;
        vec.pb(0);
        for(int i = 1; i <= n; ++i)
        {
            int x;
            sc("%d", &x);
            vec.pb(x);
            if(x < i)
                ok = false;
            else
                ck[x]++;
        }
        if(!ok)
        {
            cout<<-1<<endl;
            continue;
        }

        for(int i = 1; i <= n; ++i)
        {
            if(ck[i] == 0)
                qu.push(i);
        }

        for(int i = 1; i <= n; ++i)
        {
            mp[vec[i]]++;
            if(mp[vec[i]] > 1)
            {
                cout<<qu.front()<<" ";
                qu.pop();
            }
            else
            {
                cout<<vec[i]<<" ";
            }

        }
        cout<<endl;
    }

    return 0;
}

