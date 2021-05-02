#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf pritnf
#define pb push_back

int chk, nx, mx;

int main()
{
    int nm, tm, a, b, da, db, np, nk;
    sc("%d%d%d%d%d%d", &nm, &tm, &a, &b, &da, &db);

    np = (a+b)-nm;

    for(int i = 0; i < tm; ++i)
    {
        for(int j = 0; j < tm; ++j)
        {
            nx = a- i*da;
            mx = b- j*db;
            nk = (i*da + j*db);
            if(nk == np || nx == nm || mx == nm)
            {
                chk = 1;
                break;
            }
        }
    }

    if(chk == 1 || nm == 0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}
