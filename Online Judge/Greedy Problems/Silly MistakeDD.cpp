#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int mx = 1e5+7;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int n, cnt = 0;
    sc("%d", &n);
    vector <int> vec, ans;
    vector <int> ck(mx, 0);

    for(int i = 1; i <= n; ++i)
    {
        int x, px;
        sc("%d", &x);
        px = abs(x);
        vec.pb(px);
        if(x > 0)
        {
            if(ck[px] != 0)
            {
                cout<<-1<<endl;
                return 0;
            }
            ck[px] = 1;
            cnt++;
        }
        else
        {
            if(ck[px] != 1)
            {
                cout<<-1<<endl;
                return 0;
            }
            ck[px] = 2;
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

    cout<<ans.size()<<endl;
  ///  sort(ans.begin(), ans.end());

    for(int i = 0; i < ans.size(); ++i)
        cout<<ans[i]<<" ";
    cout<<endl;



    return 0;
}

