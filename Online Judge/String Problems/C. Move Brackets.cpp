#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int nm;
        sc("%d", &nm);
        string ss;
        queue<char> qu;
        cin>>ss;

        for(int i = 0; i < nm; ++i)
        {
            if(ss[i] == '(')
                qu.push(ss[i]);
            else if(!qu.empty())
                qu.pop();
        }
        if(qu.empty())
            cout<<0<<endl;
        else
            cout<<qu.size()<<endl;
    }

    return 0;
}
