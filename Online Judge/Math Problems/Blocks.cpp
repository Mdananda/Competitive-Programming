#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int nm, b, w;
    b = w = 0;
    string s;
    cin>>nm>>s;
    char ck;
    vector<int> ans;

    for(int i = 0; i < s.size(); ++i)
    {
        if(s[i] == 'B')
            b++;
        else
            w++;
    }

    if(b == 0 || w == 0)
    {
        cout<<0<<endl;
        return 0;
    }

    if(nm%2 == 0)
    {
        if(b%2 != 0 || w%2 != 0)
        {
            cout<<-1<<endl;
            return 0;
        }
    }
    else
    {
        if(b%2 != 0)
        {
            if(b > w)
            {
                cout<<-1<<endl;
                return 0;
            }
        }
        else
        {
            if(w > b)
            {
                cout<<-1<<endl;
                return 0;
            }
        }
    }

    ck = s[1];
    for(int i = 0; i < s.size()-1; )
    {
        if(s[i] != s[i+1])
        {
            if(s[i] != ck)
            {
                s[i+1] = s[i];
                ans.pb(i+1);
            }
            i++;
        }
        else
        {
            if(s[i] == ck)
                i = i + 2;
            else
            {
                ans.pb(i+1);
                s[i+1] = ck;
                i = i + 2;
            }
        }
    }

    cout<<ans.size()<<endl;
    for(int i = 0; i < ans.size(); ++i)
        cout<<ans[i]<<" ";
    cout<<endl;

    return 0;
}
