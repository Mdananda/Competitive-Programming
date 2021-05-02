#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool check(string s)
{
    int n=s.length();
    map<char,int> m;
    map<char,int>:: iterator it;
    for(int i = 0; i < n; ++i)
    {
        m[s[i]]++;
    }
    int cnt=0;
    for(it=m.begin(); it!=m.end(); it++)
    {
        if(it->second%2)
        {
            cnt++;
        }
    }
    if(n%2&&cnt==1)
    {
        return true;
    }
    if(!(n%2)&&cnt==0)
    {
        return true;
    }
    return false;
}

int main()
{
    int t;
    cin>>t;
    for(int p = 1; p <= t; ++p)
    {
        int num, k;
        cin>>num>>k;
        ///getchar();
        string a;
        cin>>a;
        string s;
        s=a;
        int n=s.length();
        int cnt=0;
        if(check(a) == true)
        {
            for(int i=0; i<n/2; i++)
            {
                for(int j=n-1-i; j>i; j--)
                {
                    if(s[j]==s[i] && (i+j+1) == n)
                        break;
                    if(s[j]==s[i])
                    {
                        swap(s[j], s[n-i-1]);
                        cnt++;
                        break;
                    }
                }
            }
            ///cout<<s<<endl;
            printf("Case %d: %d\n", p, cnt);
        }
        else
        {
            printf("Case %d: -1\n", p);
        }
    }

    return 0;
}
