#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i, n;
    cin>>n;
    while(n--)
    {
        char ch[1000], a;
        cin>>ch;
        int l = strlen(ch);
        sort(ch, ch+l);
        a = ch[0];
        for(i = 0; i < l; ++i)
        {
            if(ch[i] != a)
            {
                cout<<"No"<<endl;
                break;
            }
            a++;
        }
        if(i == l)
            cout<<"Yes"<<endl;
    }

    return 0;
}

