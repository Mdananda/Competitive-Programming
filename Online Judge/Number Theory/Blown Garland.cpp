#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf printf

int ln, ck, cnt[4];

int main()
{

    string ss, ans="RBYG";
    cin>>ss;
    char chr[4];
    ln = ss.size();

    for(int i = 0; i < ln; ++i)
    {
        int id = i%4;
        if(ss[i] == '!')
            cnt[id]++;
        else
            chr[id] = ss[i];
    }

    for(int i = 0; i < 4; ++i)
    {
        for(int j = 0; j < 4; ++j)
        {
            if(chr[j] == ans[i])
            {
                pf("%d ", cnt[j]);
                break;
            }
        }
    }

    cout<<endl;

    return 0;
}
