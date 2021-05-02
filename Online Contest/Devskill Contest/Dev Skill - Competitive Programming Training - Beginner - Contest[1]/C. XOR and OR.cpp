#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int cur;

int main()
{
    int i, a, b, x, y, mnn, mx, sz, szz;
    string nm, mn;
    cin>>nm;
    cin>>mn;

    sz = nm.size();
    szz = mn.size();

    if(sz == szz)
    {
        for(i = 1; i < sz; i+=2)
        {
            if((nm[i] == mn[i]) && (nm[i-1] == mn[i-1]))
                continue;
            x = nm[i]-'0';
            y = nm[i-1]-'0';
            a = min((x|y), (x^y));
            b = max((x|y), (x^y));
            mnn = min((mn[i]-'0'), (mn[i-1]-'0'));
            mx = max((mn[i]-'0'), (mn[i-1]-'0'));
            if((mnn != a) || (mx != b))
            {
                cur = 1;
                break;
            }
        }
        if(sz%2 == 1)
        {
            if(nm[sz-1] != mn[sz-1])
                cur = 1;
        }

        if(cur == 0)
            cout<<"YES"<<endl;
        else
        {
            cur = 0;
            for(i = sz-2; i >= 0; i-=2)
            {
                if((nm[i] == mn[i]) && (nm[i+1] == mn[i+1]))
                    continue;
                x = nm[i]-'0';
                y = nm[i+1]-'0';
                a = min((x|y), (x^y));
                b = max((x|y), (x^y));
                mnn = min((mn[i]-'0'), (mn[i+1]-'0'));
                mx = max((mn[i]-'0'), (mn[i+1]-'0'));
                if((mnn != a) || (mx != b))
                {
                    cur = 1;
                    break;
                }
            }
            if(sz%2 == 1)
            {
                if(nm[0] != mn[0])
                    cur = 1;
            }

            if(cur == 0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
    }
    else
        cout<<"NO"<<endl;


    return 0;
}
