#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf

bool chk[1000000];
vector<int> divisor[1000];

void seive(int n)
{
    for(int i = 2; i <= n; ++i)
    {
       // if(chk[i])
         ///   continue;
        for(int j = i+i; j <= n; j += i)
        {
            chk[j] = true;
            divisor[j].push_back(i);
        }
        divisor[i].push_back(i);
    }
}

int main()
{

    seive(100);

    for(int i = 0; i < divisor[12].size(); ++i)
        cout<<divisor[12][i]<<" ";

    return 0;
}
