#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf

bool flg[100010];
int ck[100010];
int cnt;
void seive(int nm)
{
    /// cout<<nm<<endl;
    for(int i = 2; i <= nm; ++i)
    {
        if(flg[i])
        {
            ck[i] = 2;
            cnt = 1;
            continue;
        }
        for(int j = i+i; j <= nm; j += i)
        {
            flg[j] = 1;
        }
        ck[i] = 1;
    }
}

int main()
{
    int n;

    sc("%d", &n);
    seive(n+1);

    if(cnt == 1)
        cout<<2<<endl;
    else
        cout<<1<<endl;
    for(int i = 2; i <= n+1; ++i)
    {
        pf("%d ", ck[i]);
    }
    cout<<endl;

    return 0;
}
