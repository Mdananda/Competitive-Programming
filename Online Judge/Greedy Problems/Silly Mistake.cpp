#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll mx = 1e6+7;

#define sc scanf
#define pf printf
#define pb push_back

vector<int> ck(mx, 0);

int main()
{
    int n, p;
    sc("%d", &n);
    vector <int> vec, ans;

    ll cnt = 0;
    for(int i = 1; i <= n; ++i)
    {
        int x;
        sc("%d", &x);
        p = abs(x);
        vec.pb(p);
        if(x > 0)
        {
            if(ck[p] != 0)
            {
                cout<<-1<<endl;
                return 0;
            }
            ck[p] = 1;
            cnt++;
        }
        else
        {
            if(ck[p] != 1)
            {
                cout<<-1<<endl;
                return 0;
            }
            ck[p] = 2;
            cnt--;
        }

        if(cnt == 0)
        {
            ans.pb(vec.size());
            for(int i = 0; i < vec.size(); ++i)
                ck[vec[i]] = 0;
            vec.clear();
        }
    }
    if(!vec.empty())
    {
        cout<<-1<<endl;
        return 0;
    }
    cout<<ans.size()<<endl;

    for(int i = 0; i < ans.size(); ++i)
        cout<<ans[i]<<" ";
    cout<<endl;



    return 0;
}

