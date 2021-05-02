#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        vector<string> vec, ck;
        for(int i = 1; i <= n; ++i)
        {
            string s;
            cin>>s;
            vec.pb(s);
        }

        vector <char> ch, ch2;

        for(int j = 0; j < n; ++j)
        {
            ch.pb(vec[j][0]);
        }
        sort(ch.begin(), ch.end());

        for(int i = 0; i < n; ++i)
        {
            for(int j = 0; j < n; ++j)
            {
                if(i == j)
                    continue;
                if(vec[i] == vec[j])
                {
                    ck.pb(vec[i]);
                }

            }
        }

        char p = '0';

        for(int i = 0; i < 10; ++i)
        {
            if(binary_search(ch.begin(), ch.end(), p) == 0)
            {
                ch2.pb(p);
            }
            p += 1;
        }


        int ans = 0, k = 0;

        for(int i = 0; i < ck.size(); ++i)
        {
            int cnt = 0;
            for(int j = 0; j < n; ++j)
            {
                if(ck[i] == vec[j])
                {
                    cnt++;
                    if(cnt >= 2)
                    {
                        vec[j][0] = ch2[k];
                        k++;
                        ans++;
                    }
                }
            }
        }

        cout<<ans<<endl;
        for(int i = 0; i < n; ++i)
            cout<<vec[i]<<endl;
    }
    return 0;
}
