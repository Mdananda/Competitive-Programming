#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    ll sz, ssz, k, cnt = 0;
    string s,ss;
    cin>>s>>ss;
    ssz = ss.size();
    sz = s.size();

    for(int i = 0; i < ssz; ++i)
    {
        k = i;
        if((ssz-i) < sz )
            break;
        for(int j = 0; j < sz; ++j, k++)
        {
            if(s[j] != ss[k])
                cnt++;
        }
    }

    cout<<cnt<<endl;

    return 0;
}
