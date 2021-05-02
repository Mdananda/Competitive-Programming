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
        string s;
        cin>>s;
        int ln = s.size();

        for(int i = 0; i < ln; ++i)
        {
            if(i == 0 && s[i] == '?')
            {
                if(s[i+1] == 'a')
                    s[i] = 'b';
                else
                    s[i] = 'a';
            }
            else if(i+1 == ln && s[i] == '?')
            {
                if(s[i-1] == 'a')
                    s[i] = 'b';
                else
                    s[i] = 'a';
            }

            else if(s[i] == '?' && s[i+1] == '?')
            {
                if(s[i-1] == 'a')
                    s[i] = 'b';
                else
                    s[i] = 'a';
            }
            else if(s[i] == '?')
            {
                if(s[i-1] == 'a' && s[i+1] == 'a')
                    s[i] = 'b';
                else if(s[i-1] == 'b' && s[i+1] == 'b')
                    s[i] = 'c';
                else if(s[i-1] == 'c' && s[i+1] == 'c')
                    s[i] = 'a';

                else if(s[i-1] == 'a' && s[i+1] == 'c')
                    s[i] = 'b';
                else if(s[i-1] == 'c' && s[i+1] == 'a')
                    s[i] = 'b';

                else if(s[i-1] == 'b' && s[i+1] == 'c')
                    s[i] = 'a';
                else if(s[i-1] == 'c' && s[i+1] == 'b')
                    s[i] = 'a';

                else if(s[i-1] == 'a' && s[i+1] == 'b')
                    s[i] = 'c';
                else if(s[i-1] == 'b' && s[i+1] == 'a')
                    s[i] = 'c';
            }
        }

        bool ok = true;

        for(int i = 1; i < ln; ++i)
        {
            if(s[i] == s[i-1])
            {
                ok = false;
                break;
            }
        }

        if(ok)
            cout<<s<<endl;
        else
            cout<<-1<<endl;
    }

    return 0;
}
