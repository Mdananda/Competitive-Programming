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
    vector<string> vec;

    for(int i = 1; i <= ts; ++i)
    {
        string s;
        cin>>s;
        vec.pb(s);
    }

    for(int i = 0; i < vec.size(); ++i)
    {
        int ln = vec[i].size();
        for(int j = 0; j < ln; ++j)
        {
            if(vec[i][j] == '?' && j-1>= 0 && j+1 < ln && vec[i][j+1] != '?')
            {
                ///cout<<1<<endl;
                if(vec[i][j-1] == 'a' && vec[i][j+1] == 'a')
                    vec[i][j] = 'b';
                else if(vec[i][j-1] == 'b' && vec[i][j+1] == 'b')
                    vec[i][j] = 'a';
                else if(vec[i][j-1] == 'c' && vec[i][j+1] == 'c')
                    vec[i][j] = 'b';
                else if(vec[i][j-1] == 'a' && vec[i][j+1] == 'b')
                    vec[i][j] = 'c';
                else if(vec[i][j-1] == 'b' && vec[i][j+1] == 'a')
                    vec[i][j] = 'c';
                else if(vec[i][j-1] == 'a' && vec[i][j+1] == 'c')
                    vec[i][j] = 'b';
                else if(vec[i][j-1] == 'c' && vec[i][j+1] == 'a')
                    vec[i][j] = 'b';
                else if(vec[i][j-1] == 'b' && vec[i][j+1] == 'c')
                    vec[i][j] = 'a';
                else if(vec[i][j-1] == 'c' && vec[i][j+1] == 'b')
                    vec[i][j] = 'a';
            }
            else if(vec[i][j] == '?' && j-1 < 0 && j+1 < ln)
            {
                ///cout<<2<<endl;
                if(vec[i][j+1]== 'a')
                    vec[i][j] = 'b';
                else
                    vec[i][j] = 'a';

            }
            else if(vec[i][j] == '?' && j-1 >= 0 && j+1 >= ln)
            {
                ///cout<<2<<endl;
                if(vec[i][j-1]== 'a')
                    vec[i][j] = 'b';
                else
                    vec[i][j] = 'a';
            }
            else if(vec[i][j] == '?' && vec[i][j+1] == '?')
            {
               /// cout<<3<<endl;
                if(vec[i][j-1]== 'a')
                    vec[i][j] = 'b';
                else
                    vec[i][j] = 'a';
            }
        }

    }

    for(int i = 0; i < ts; ++i)
    {
        int ln = vec[i].size();
        int p = 0;
        for(int j = 0; j < ln-1; ++j)
        {
            if(vec[i][j] == vec[i][j+1])
            {
                p = 1;
                break;
            }
        }
        if(p == 1)
            cout<<-1<<endl;
        else
            cout<<vec[i]<<endl;
    }
    return 0;
}
