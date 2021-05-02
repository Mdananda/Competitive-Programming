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
        int nm, od, ev, cnt, evnm, odnm;
        sc("%d", &nm);
        cnt = od = ev = 0;
        vector<int> vc;
        for(int i = 0; i < nm; ++i)
        {
            int x;
            sc("%d", &x);
            vc.pb(x);
            if(x%2 == 0)
                ev++;
            else
                od++;

            if(x%2 == 0 && i%2 != 0)
                cnt++;
            else if(x%2 != 0 && i%2 == 0)
                cnt++;
        }
        evnm = (nm+1)/2;
        odnm = nm-evnm;

        if(evnm == ev && odnm == od)
            cout<<cnt/2<<endl;
        else
            cout<<-1<<endl;
    }

    return 0;
}
