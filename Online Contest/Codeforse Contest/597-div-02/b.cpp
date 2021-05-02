#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{

    int t, m, n, o, p, r, s, x, a1, b1, c1;
    cin>>t;

    while(t--)
    {
        string sr;
        int a, b, c, num;
        cin>>num>>a>>b>>c>>sr;
        p = r = s = a1 = b1 = c1 = 0;

        for(int i = 0; i < num; ++i)
        {
            if(sr[i] == 'P')
                p++;
            else if (sr[i] == 'R')
                r++;
            else if(sr[i] == 'S')
                s++;
        }
        m = min(a, s);
        n = min(b, r);
        o = min(c, p);
        if(a > s)
            a1 = a-s;
        if(b > r)
            b1 = b-r;
        if(c > p)
            c1 = c-p;

        x = num/2;
        if(num%2 == 1)
            x = x + 1;

        ///cout<<m+n+o<<endl;


        if(m+n+o >= x)
        {
            cout<<"YES"<<endl;

            for(int i = 0; i < num; ++i)
            {
                if(sr[i] == 'R' && b > 0)
                {
                    cout<<'P';
                    b--;
                }
                else if(sr[i] == 'S' && a > 0)
                {
                    cout<<'R';
                    a--;
                }
                else if(sr[i] == 'P' && c > 0)
                {
                    cout<<'S';
                    c--;
                }
                else if(a1 > 0)
                {
                    cout<<'R';
                    a1--;
                }
                else if(b1 > 0)
                {
                    cout<<'P';
                    b1--;
                }
                else if(c1 > 0)
                {
                    cout<<'S';
                    c1--;
                }
            }
            cout<<endl;
        }
        else
            cout<<"NO"<<endl;

    }


    return 0;
}
