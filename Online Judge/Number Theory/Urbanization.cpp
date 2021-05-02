#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int cnt;
bool cmp(int a, int b)
{
    if(a >= b) return true;
    else return false;
}

int main()
{
    ll n1, n2, n3;
    cin>>n1>>n2>>n3;
    vector<int> vec;

    for(int i = 1; i <= n1; ++i)
    {
        int x;
        sc("%d", &x);
        vec.pb(x);
    }

    sort(vec.begin(), vec.end(), cmp);

    int mn = min(n2, n3);
    int mx = max(n2, n3);

    ll sm1, sm2;
    sm1 = sm2 = 0;

    for(int i = 0; i < mn; ++i)
    {
        sm1 += vec[i];
        ///cout<<vec[i]<<endl;
    }

    for(int i = mn; i < n1 && cnt < mx; ++i)
    {
        sm2 += vec[i];
        cnt++;
    }

    double sm = ((double)sm1/(double)mn + (double)sm2/(double)mx);

    pf("%lf\n",sm);

    return 0;
}
