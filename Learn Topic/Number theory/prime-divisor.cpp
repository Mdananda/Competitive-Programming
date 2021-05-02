#include <bits/stdc++.h>
using namespace std;

int isprime[100000];
vector <int> prime;

void seive(int n)
{
    for(int i = 2; i <= n; ++i)
    {
        if(isprime[i] == 1)
            continue;
        for(int j = i+i; j <= n; j += i)
        {
            isprime[j] = 1;
        }
        prime.push_back(i);
    }
}


int main()
{
    seive(10000);
    int n;
    cin>>n;

    for(int i = 0; i < prime.size(); ++i)
    {
        if(n%prime[i] != 0)
            continue;

        while(n%prime[i] == 0)
            n /= prime[i];

        cout<<prime[i]<<endl;
    }
    if(n != 1)
        cout<<n<<endl;

    return 0;
}
