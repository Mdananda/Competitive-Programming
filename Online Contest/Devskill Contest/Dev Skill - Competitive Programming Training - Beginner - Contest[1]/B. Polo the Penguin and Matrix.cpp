#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int cur, ans;

int main()
{
    vector<int> vec, anss;
    int nm, nk, nd, tmp, ds, indx, ans;
    sc("%d%d%d", &nm, &nk, &nd);

    for(int i = 0; i < nm; ++i)
    {
        for(int j = 0; j < nk; ++j)
        {
            int x;
            sc("%d", &x);
            vec.pb(x);
        }
    }


    indx = nm*nk;
    for(int i = 0; i < indx; ++i)
    {
        ans = 0;
        for(int j = 0; j < indx; ++j)
        {
            ans += abs(vec[i]-vec[j]);
        }
        ///  cout<<ans<<endl;
        anss.pb(ans);
    }
    sort(anss.begin(), anss.end());

    if(anss[0]%nd == 0)
        cout<<(anss[0]/nd)<<endl;

    else
        cout<<-1<<endl;

    return 0;
}
