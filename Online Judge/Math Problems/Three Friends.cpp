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
        vector<int> vec;
        for(int i = 1; i <= 3; ++i)
        {
            int x;
            sc("%d", &x);
            vec.pb(x);
        }

        sort(vec.begin(), vec.end());

        if(vec[0] == vec[1] == vec[2])
            cout<<0<<endl;
        else  if((vec[0] == vec[1]) && (abs(vec[2]-vec[0]) > 2))
        {
            ll a = vec[0]+1;
            ll b = vec[2]-1;
            cout<<(b-a)*2<<endl;
        }
        else  if((vec[2] == vec[1]) && abs(vec[2]-vec[0]) > 2)
        {
            ll a = vec[0]+1;
            ll b = vec[2]-1;
            cout<<(b-a)*2<<endl;
        }
        else  if((vec[0] == vec[1]) && abs(vec[2]-vec[0]) <= 2)
            cout<<0<<endl;
        else  if((vec[2] == vec[1]) && abs(vec[2]-vec[0]) <= 2)
            cout<<0<<endl;
        else
        {
            ll a = vec[0]+1;
            ll b = vec[2]-1;
            ll c = b-a;
            a = vec[1]-a;
            b = b-vec[1];
            cout<<a+b+c<<endl;
        }
    }
    return 0;
}
