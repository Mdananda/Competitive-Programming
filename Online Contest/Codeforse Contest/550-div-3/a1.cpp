#include <bits/stdc++.h>
using namespace std;

int main()
{

    int i, n;
    cin>>n;
    while(n--)
    {
        char ch[1000];
        scanf("%s", ch);
        int l = strlen(ch);
        sort(ch, ch+l);
        for(i = 1; i < l; ++i)
        {
            if(ch[i]-ch[i-1] != 1)
            {
                cout<<"NO"<<endl;
                break;
            }
        }
        if(i == l)
            cout<<"YES"<<endl;
    }



    return 0;
}
