#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back

int main()
{
    int nm, zr, on, ar[220];
    vector<int> vc;
    string ss;
    cin>>nm>>ss;
    zr = on = 0;
    for(int i = 0; i < ss.size(); ++i)
    {
        if(ss[i] == 'B')
        {
            ar[i+1] = 0;
            zr++;
        }
        else
        {
            ar[i+1] = 1;
            on++;
        }
    }
    if(zr%2 == 1 && on%2 == 1)
        cout<<-1<<endl;
    else
    {
        if(zr%2 == 0)
        {
            for(int i = 1; i < nm; )
            {
                if(ar[i] == 0 && ar[i+1] == 1)
                {
                    swap(ar[i], ar[i+1]);
                    vc.pb(i);
                    i++;
                }
                else if(ar[i] == 0 && ar[i+1] == 0)
                {
                    vc.pb(i);
                    i += 2;
                }
                else
                    i++;
            }
        }
        else
        {
            for(int i = 1; i < nm; )
            {
                if(ar[i] == 1 && ar[i+1] == 0)
                {
                    swap(ar[i], ar[i+1]);
                    vc.pb(i);
                    i++;
                }
                else if(ar[i] == 1 && ar[i+1] == 1)
                {
                    vc.pb(i);
                    i += 2;
                }
                else
                    i++;
            }
        }
        cout<<vc.size()<<endl;
        if(vc.size() > 0)
        {
            for(int i = 0; i < vc.size(); ++i)
                cout<<vc[i]<<" ";
            cout<<endl;
        }
    }

    return 0;
}
