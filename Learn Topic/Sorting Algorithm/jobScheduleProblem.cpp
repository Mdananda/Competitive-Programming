#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int ans[100];

bool cmp(pair<int, int> a, pair<int, int>b )
{
    if(a.second > b.second)
        return true;
    else
        return false;
}
int main()
{
    pair <int, int >jb[100];

    int n;
    cin>>n;
    for(int i = 1; i <= n; ++i)
    {
        cin>>jb[i].first>>jb[i].second;
    }

    sort(jb+1, jb+n+1, cmp);
    int tl_prft = 0, mxdat = 0;

    for(int i = 1; i <= n; ++i)
    {
        int datl = jb[i].first;
        int prft = jb[i].second;

        for(int j = datl; j >= 1; j--)
        {
            if(ans[j] == 0)
            {
                tl_prft += prft;
                ans[j] = i;
                mxdat = max(mxdat, j);
                break;
            }
        }
    }

    cout<<"Total_profit = "<<tl_prft<<endl;
    for(int i = 1; i < mxdat; i++)
        cout<<ans[i]<<" ";

    cout<<endl;


    return 0;
}
