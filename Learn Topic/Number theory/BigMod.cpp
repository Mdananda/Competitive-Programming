#include <bits/stdc++.h>
using namespace std;

int ans = 1, mod = 1e9+7;
int bigMod(int n, int k)
{
    if(k == 1)
        return n%mod;
    ans =  bigMod(n, (k/2) % mod)%mod;
    ans = (ans * ans)%mod;
    if(k%2 == 1)
        ans =  (ans * n)%mod;

    return ans;
}

int main()
{

    cout<<bigMod(2, 100)<<endl;



    return 0;
}
