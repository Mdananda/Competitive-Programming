#include <bits/stdc++.h>
using namespace std;

int r, m = 5;

int bmod(int n, int k)
{
    if(k == 0)
        return n;
    if(k%2 == 0)
    {
        r = bmod(n, k/2);
        r = (r * r)%m;
    }
    else
        return (n*bmod(n, k-1))%m;

   return r;
}
int main()
{

    cout<<bmod(2, 5)<<endl;


    return 0;
}
