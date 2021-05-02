#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf printf
#define pb push_back

vector<ll> vec;

int main()
{
    int ts;
    cin>>ts;
    while(ts--)
    {
        ll n, k, ck = 0;
        sc("%lld%lld", &n, &k);
        string str;
        cin>>str;

        queue<int> qu;

        for(int i = 0; i < n; ++i)
        {
            if(str[i] == '0')
                qu.push(i);
        }

        vector<char> vec;

        for(int i = 0; i < n; ++i)
        {
            if(qu.empty())
                vec.pb('1');
            else
            {
                int nm = qu.front();
                nm = nm - i;
                if(nm > k)
                    vec.pb('1');
                else
                {
                    k = k - nm;
                    vec.pb('0');
                    qu.pop();
                }
            }
        }

        for(int i = 0; i < n; ++i)
            cout<<vec[i];
        cout<<endl;

    }

    return 0;
}
