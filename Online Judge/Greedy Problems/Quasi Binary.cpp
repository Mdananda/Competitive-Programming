#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf printf
#define pb push_back

ll prw(int n)
{
    int p = 1;
    for(int i = 1; i <= n; ++i)
        p = p * 10;
    return p;
}

ll seive(int n)
{
    vector<char>ch;
    while(n > 0)
    {
        if(n%2 == 0)
        {
            ch.pb('0');
            n = n / 2;
        }
        else
        {
            ch.pb('1');
            n = n / 2;
        }
    }
    ll num = 0;
    for(int i = ch.size()-1; i >= 0; i--)
    {
        num += (ch[i]-'0')*prw(i);
    }
    return num;
}

int main()
{
    vector<ll>bin;
    vector<ll>::iterator it;

    for(int i = 1; i <= 70; ++i)
    {
        ll p = seive(i);
        bin.pb(p);
    }
    ll num;
    sc("%lld", &num);
    vector<ll>vec;

    while(num > 0)
    {
        it = upper_bound(bin.begin(), bin.end(), num);
        int pos = distance(bin.begin(), it)-1;
        num = num - bin[pos];
        vec.pb(bin[pos]);
    }

    cout<<vec.size()<<endl;
    sort(vec.begin(), vec.end());
    for(int i = 0; i < vec.size(); ++i)
        cout<<vec[i]<<" ";
    cout<<endl;

    return 0;
}
