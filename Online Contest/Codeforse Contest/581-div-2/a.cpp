#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string num;
    cin>>num;
    ll l = num.size();
    if(l%2 == 1)
    {
        for(ll i = 1; i < l; ++i)
        {
            if(num[i] == '1')
            {
                cout<<(l+1)/2<<endl;
                return 0;
            }
        }

    }
    cout<<l/2<<endl;


    return 0;
}
