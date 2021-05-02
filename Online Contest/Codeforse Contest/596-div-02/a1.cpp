#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf

int main()
{
    int a, b;
    sc("%d%d", &a, &b);

    if(a == b)
        cout<<a<<"1"<<" "<<b<<"2"<<endl;
    else if((b-a) == 1)
        cout<<a<<" "<<b<<endl;
    else if(a == 9 && b == 1)
        cout<<a<<" "<<"10"<<endl;
    else
        cout<<"-1"<<endl;


    return 0;
}

