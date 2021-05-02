#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n, low, hg;

    while(true)
    {
        cin>>n;
        low = 1;
        hg = 2e9;

        while((hg-low) > 1)
        {
            ll mid = (hg+low)/2;
            ll midval = (mid*(mid+1))/2;

            if(midval <= n)
            {
                low = mid;
            }
            else if(midval > n)
                hg = mid - 1;
        }

        ll hgval = (hg*(hg+1))/2;

        if(hgval <= n)
            cout<<hg<<endl;
        else
            cout<<low<<endl;

    }

    return 0;
}
