#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf

int main()
{
    int ts, i;
    cin>>ts;
    getchar();
    while(ts--)
    {
        string ss;
        getline(cin, ss);
        stack<char> qq;

        for(i = 0; i < ss.size(); ++i)
        {
            if(ss[i] == '(' || ss[i] == '[')
                qq.push(ss[i]);
            else if(ss[i] == ')' && !qq.empty())
            {
                if(qq.top() == '(')
                    qq.pop();
                else
                    break;
            }
            else if(ss[i] == ']' && !qq.empty())
            {
                if(qq.top() == '[')
                    qq.pop();
                else
                    break;
            }
            else
                break;
        }
        if(i == ss.size() && qq.empty())
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
    return 0;
}
