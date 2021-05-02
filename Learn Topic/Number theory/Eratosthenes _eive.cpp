#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n = 100000;
map<ll, ll>ar;
void seive()
{
    for(int i = 2; i <= n; ++i)
    {
        if(ar[i] == 0)
        {
            for(int j = i*i; j <= n ; j += i)
                ar[j]++;
        }
    }
}

int isprime(int m)
{
    if(ar[m] == 0)
        return 1;
    else
        return 0;
}

int main()
{
    int p;
    seive();

    while(1)
    {
        scanf("%d", &p);

        if(isprime(p))
            cout<<"Prime"<<endl;
        else
            cout<<"Not prime"<<endl;
    }

    return 0;
}
