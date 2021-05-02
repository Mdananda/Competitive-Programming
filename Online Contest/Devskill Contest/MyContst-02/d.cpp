#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <ll> vec;

int main()
{
    ll n, p, ans, cnt;
    cin>>n;
    ans = cnt = 0;
    vector <ll> vec;
    vector<ll>::iterator it;

    for(int i = 1; i <= n; ++i)
    {
        cin>>p;
        vec.push_back(p);
    }
    sort(vec.begin(), vec.end());


    for(int i = 1; i <= n; ++i)
    {
        int j = lower_bound(vec.begin(), vec.end(), ans)-vec.begin();

        if(j < vec.size())
        {

            cnt++;
            it = lower_bound(vec.begin(), vec.end(), ans);
            ans += vec[j];
            vec.erase(it);
        }

    }

    cout<<cnt<<endl;

    return 0;
}
