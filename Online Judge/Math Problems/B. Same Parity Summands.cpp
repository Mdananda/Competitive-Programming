#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int ts;
    cin>>ts;
    while(ts--)
    {
        int nm, nk;
        sc("%d%d", &nm, &nk);

        if(nm%2 == 0 && nk%2 == 0 && (nm-(nk-1)) > 0)
        {
            cout<<"YES"<<endl;
            for(int i = 1; i < nk; ++i)
                pf("1 ");
            cout<<nm-(nk-1)<<endl;
        }
        else if(nm%2 == 0 && nk%2 == 1 && (nm-(nk-1)*2) > 0)
        {
            cout<<"YES"<<endl;
            for(int i = 1; i < nk; ++i)
                pf("2 ");
            cout<<nm-(nk-1)*2<<endl;
        }
        else if(nm%2 == 1 && nk%2 == 1 && (nm-(nk-1) > 0))
        {
            cout<<"YES"<<endl;
            for(int i = 1; i < nk; ++i)
                pf("1 ");
            cout<<nm-(nk-1)<<endl;
        }
        else
            cout<<"NO"<<endl;
    }

    return 0;
}

