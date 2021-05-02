#include <bits/stdc++.h>
using namespace std;

int ar[10000], k;
int prime[10000], isprime[100000];

void seive()
{
    for(int i = 2; i <= 1000; i += 2)
        ar[i] = 1;
    prime[k++] = 2;
    for(int i = 3; i < 1000; i += 2)
    {
        if(ar[i] == 0)
        {
            prime[k++] = i;
            for(int j = i*i; j <= 10000; j += i*2)
                ar[j] = 1;
        }
    }
}

void segment(int l, int r)
{
    for(int i = 0; prime[i]*prime[i] <= r; ++i)
    {
        int base = (l/prime[i])*prime[i];
        if(base < l)
            base += prime[i];
        for(int j = base; j <= r; j += prime[i])
        {
            isprime[j-l] = 1;
        }
        if(base == prime[i])
            isprime[base-l] = 0;

    }
}

int main()
{
    seive();
    int l = 9;
    segment(l, 100);
    for(int i = 0; i < 100-l+1; ++i)
    {
        if(isprime[i] == 0)
        cout<<i+l<<" ";
    }
    ///cout<<isprime[0]<<endl;




    return 0;
}
