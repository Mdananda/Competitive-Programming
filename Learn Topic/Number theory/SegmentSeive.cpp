#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

bool chk[40000], isprm[100010];
vector<int> prm;

void seive()
{
    for(int i = 2; i <= 40000; ++i)
    {
        if(chk[i] == true)
            continue;
        for(int j = i+i; j <= 40000; j += i)
        {
            chk[j] = true;
        }
        prm.pb(i);
    }
}

void SegmentSeive(int lm, int rm)
{
    for(int i = 0; prm[i]*prm[i] <= rm; ++i)
    {
        int bs = (lm/prm[i])*prm[i];
        if(bs < lm)
            bs += prm[i];
        for(int j = bs; j <= rm; j += prm[i])
            isprm[j-lm] = true;
    }
}

int main()
{
    seive();

    int lm, rm;
    sc("%d%d", &lm, &rm);

    SegmentSeive(lm, rm);

    for(int i = 0; i <= (rm-lm) ; ++i)
    {
        if(isprm[i] == false)
            cout<<i+lm<<" ";
    }

    cout<<endl;


    return 0;
}

