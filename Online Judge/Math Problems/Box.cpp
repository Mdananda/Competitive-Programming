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
        sc("%d", &n);
        vector<int> vec;
        vector<int>code(n+1, 0);
        for(int i = 1; i <= n; ++i)
        {
            int x;
            sc("%d", &x);
            vec.pb(x);
            code[x] = 1;
        }
        if(n != 1)
        {
            int i, indx;
            for(i = n-1; i > 0; --i)
            {
                if(vec[i] != vec[i-1])
                {
                    indx = i;
                    break;
                }
            }
            if(i == n-1)
            {
                for(i = 1; i <= indx; ++i)
                {
                    if(vec[i-1] == vec[i])
                        break;
                }
                if(i > indx)
                {
                    for(i = 0; i < n; ++i)
                    {
                        pf("%d ", vec[i]);
                    }
                    cout<<endl;
                }
                else
                    cout<<-1<<endl;
            }
            else
            {
                if(i == 0)
                {
                    indx = i;
                    for(i = 1; i <= n; ++i)
                    {
                        if(code[i] == 0)
                        {
                            indx++;
                            vec[indx] = i;
                        }
                    }
                    for(int i = 0; i < n; ++i)
                    {
                        pf("%d ", vec[i]);
                    }
                    cout<<endl;

                }
                else
                {
                    indx = i;
                    int in = i;

                    for(i = 1; i <= indx; ++i)
                    {
                        if(vec[i-1] == vec[i])
                            break;
                    }

                    for(int j = 1; j <= n; ++j)
                    {
                        if(code[j] == 0)
                        {
                            in++;
                            vec[in] = j;
                        }
                    }
                    if(i > indx)
                    {
                        for(i = 0; i < n; ++i)
                        {
                            pf("%d ", vec[i]);
                        }
                        cout<<endl;
                    }
                    else
                        cout<<-1<<endl;

                }
            }
        }
        else
            cout<<vec[0]<<endl;
    }


    return 0;
}
