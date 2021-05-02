#include <bits/stdc++.h>
using namespace std;

bool ch;
int ar[5010];

int main()
{
    int nm, a, b, c;
    cin>>nm;

    for(int i = 1; i <= nm; ++i)
        cin>>ar[i];
    for(int i = 1; i <= nm; ++i)
    {
        a = ar[i];
        b = ar[a];
        c = ar[b];
        if(a == ar[c])
            ch = true; break;
    }

    if(ch == true)
        cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

    return 0;
}
