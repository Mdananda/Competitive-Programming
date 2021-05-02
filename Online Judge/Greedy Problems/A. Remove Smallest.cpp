#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int i, nm, cmp, ar[100];
        cin>>nm;
        for(i = 0; i < nm; ++i)
            cin>>ar[i];
        sort(ar, ar+nm);
        cmp = ar[0];
        for(i = 1; i < nm; ++i)
        {
            if(abs(cmp-ar[i]) <= 1)
                cmp = max(cmp, ar[i]);
            else
                break;
        }
        if(i == nm)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }

    return 0;
}
