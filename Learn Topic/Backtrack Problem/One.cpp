#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

/*

1. How to find out longest path in a graph but every node don't visit more than one.

*/

int vst[10];
vector<int> ans;

int fnc()
{
    if(ans.size() == 3)
    {
        for(int i = 0; i < 3; ++i)
            cout<<ans[i]<<" ";
        cout<<endl;
    }
    for(int i = 1; i <= 3; ++i)
    {
        if(!vst[i])
        {
            ans.pb(i);
            vst[i] = 1;
            fnc();
            ans.pop_back();
            vst[i] = 0;
        }
    }
}

int main()
{
    fnc();

    return 0;
}

