#include <bits/stdc++.h>
using namespace std;

int isprime[10000];
vector <int> divisor[10000];

void seive(int n)
{
    for(int i = 2; i <= n; ++i)
    {
        if(isprime[i] == 1)
            continue;
        for(int j = i; j <= n; j += i)
        {
            isprime[j] = 1;
            divisor[j].push_back(i);
        }
        /// divisor[i].push_back(i);
    }
}

int main()
{
    seive(100);

    int num1, num2, gcd = 1;
    cin>>num1>>num2;

    ///cout<<divisor[num1].size()<<endl;
    for(int i = 0; i < divisor[num1].size(); ++i)
    {
        int cur = divisor[num1][i];
       /// cout<<cur<<endl;
        if(num2 % cur != 0)
            continue;
        int cnt1, cnt2, tmp = num1;
        cnt1 = cnt2 = 0;

        while(tmp % cur == 0)
        {
            cnt1++;
            tmp /= cur;
        }
        tmp = num2;
        while(tmp % cur == 0)
        {
            cnt2++;
            tmp /= cur;
        }
        gcd = gcd*pow(cur, min(cnt1, cnt2));
    }

    cout<<"The GCD : "<< gcd<<endl;


    return 0;
}
