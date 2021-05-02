#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int n, cnt = 0;
    sc("%d", &n);
    stack<char> rst;

    for(int i = 1; i <= n; ++i)
    {
        char ch;
        cin>>ch;
        if(ch == '(')
        {
            if(cnt == 0)
                rst.push(ch);
            else if(cnt == 1)
                cnt--;
            else
            {
                cout<<"No"<<endl;
                return 0;
            }

        }
        if(ch == ')')
        {
            if(!rst.empty())
                rst.pop();
            else
                cnt++;
        }
    }

    /// cout<<rst.top()<<endl;
    if(rst.empty() && cnt == 0)
        cout<<"Yes"<<endl;
    else
        cout<<"No"<<endl;


    return 0;
}
