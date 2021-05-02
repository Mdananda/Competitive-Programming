#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main()
{
    int n;
    cin>>n;
    vector <ll> vec;
    string str;

    for(int i = 0; i < n; ++i)
      {
          ll m;
          scanf("%lld", &m);
          vec.push_back(m);
      }

    cin>>str;
    ll p, q, k , l, mn, lg;
    q = k = l = mn = lg = 0;
    p = 4;
    for(int i = 4; i < n; ++i)
    {
        if(str[i] == '0')
        {
            p++;
            if(q >= 4 && k != 1)
            {
                ll x = 1e9;
                for(int j = i-4; j < i; ++j)
                {
                    if(vec[j] < x)
                        x = vec[j];
                }
                lg = x-1;
                k = 1;
            }
            q = 0;

        }
        else
        {
            q++;
            if(p >= 4 && l != 1)
            {
                vector<ll>s(vec[0]+(i-4), vec[0]+i);
                sort(s.begin(), s.end(), greater<ll>());
                mn = s[0]+1;
                l = 1;

            }
            p = 0;

        }
    }


    if(lg == 0)
        lg = mn+10;

    cout<<mn<<" "<<lg<<endl;



    return 0;
}
