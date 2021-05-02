#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
int mxx = 1e5+10;

int main()
{
    int nm, np, pos, ar[mxx], arr[mxx];
    cin>>nm;

    for(int i = 0; i < nm; ++i)
        cin>>ar[i];
    cin>>np;
    for(int i = 0; i < np; ++i)
        cin>>arr[i];
    sort(ar, ar+nm);

    for(int i = 0; i < np; ++i)
    {
        if(binary_search(ar, ar+nm, arr[i]) == true)
        {
            pos = lower_bound(ar, ar+nm, arr[i])-ar;
            cout<<pos<<endl;
        }
        else
            cout<<-1<<endl;
    }

    return 0;
}
