#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, dif, an;
    cin>>n;
    an = 1;
    for(int i = 1; i <= n; ++i)
    {
        cout<<an<<" ";
        if(i%2 == 1)
            an += (n-i);
        else
            an -= (n-i);
    }

    cout<<endl;

    return 0;
}
