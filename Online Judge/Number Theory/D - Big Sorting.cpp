#include <bits/stdc++.h>
using namespace std;

#define sc scanf
#define pf printf
#define pb push_back

bool cmp(string sr1, string sr2)
{
    if(sr1.size() < sr2.size())
        return true;
    else if(sr1.size() == sr2.size() && sr1 < sr2)
        return true;
    else
        return false;
}

int main()
{
    int nm;
    cin>>nm;
    vector<string> ss;
    for(int i = 0; i < nm; ++i)
    {
        string sr;
        cin>>sr;
        ss.pb(sr);
    }
    sort(ss.begin(), ss.end(), cmp);
    for(int i = 0; i < nm; ++i)
        cout<<ss[i]<<endl;;

    return 0;
}
