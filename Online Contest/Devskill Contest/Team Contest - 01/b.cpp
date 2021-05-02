#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
vector <ll>vec;

int main()
{
    ll n, p, num1, num;
    cin>>n;
    p = 10;
    num1 = n;

    while(p--)
    {
        num = n;
        ll ans = 1,ans2 = 1, k = 0, l = 0;

        while(n > 1)
        {
            ll p = n%10;
            if(p == 1)
                l = 1;
            if(p == 0 || p == 1)
            {
                ans *= 9;
                k = 1;
            }
            else
            {
                if(k == 1)
                    ans *= (p-1);
                else
                    ans *= p;
                k = 0;
            }
            n = n/10;
        }

        if(l == 1)
        {
            ans2 = 1;
            while(num >= 10)
            {
                ans2 *= 9;
                num /= 10;
            }
        }
        vec.push_back(max(ans, ans2));
        num1--;
        n = num1;
    }

    sort(vec.begin(), vec.end(), greater<ll>());

    cout<<vec[0]<<endl;


    return 0;
}
