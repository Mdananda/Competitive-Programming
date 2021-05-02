#include <bits/stdc++.h>
using namespace std;

int prime[100000];
 vector <int> divisor[1000];

int seive()
{
    for(int i = 2; i <= 36; ++i)
    {
        ///if(prime[i]) continue;

        for(int j = i; j <= 1000; j += i)
        {
            prime[j] = 1;
            divisor[j].push_back(i);

        }
    }

}

int main()
{
    seive();
    int n;
    cin>>n;
    for(int i = 0; i < divisor[n].size(); ++i)
        cout<<divisor[n][i]<<" ";
    cout<<endl;






    return 0;
}
