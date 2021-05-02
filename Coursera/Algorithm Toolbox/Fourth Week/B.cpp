#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int ans, mxx = 1e5+10;

bool cmp(pair<int, int> &nx, pair<int, int> &mx)
{
    return mx.second >= nx.second;
}

int main()
{
    int nm, nx, ar[mxx];
    cin>>nm;
    map<int, int> mp;

    for(int i = 0; i < nm; ++i)
    {
        cin>>nx;
        mp[nx]++;
    }

    vector<pair<int, int>> pp;
    map<int, int>:: iterator it;
    for(it = mp.begin(); it != mp.end(); it++)
        pp.push_back(make_pair(it->first, it->second));

    sort(pp.begin(), pp.end(), cmp);

    for(int i = 0; i < pp.size(); ++i)
    {
        if(pp[i].second > nm/2) ans++;
    }

    cout<<ans<<endl;

    return 0;
}
