#include <bits/stdc++.h>
using namespace std;

vector <int> divisor[1000];
int isprime[1000];

void seive()
{
    for(int i = 2; i <= 100; ++i)
    {
        if(isprime[i])
            continue;
        for(int j = i; j < 100; j += i)
        {
            isprime[j] = 1;
            divisor[j].push_back(i);
        }
    }
}


int main()
{

    int x, y, gc = 1;
    cin>>x>>y;
    seive();

    for(int i = 0; i < divisor[x].size(); ++i)
    {
        int cur = divisor[x][i];
       /// cout<<cur<<endl;
        int tmp1 = x, tmp2 = y, cury = 0, curx = 0;

        while(tmp1%cur == 0)
        {
            curx++;
            tmp1 /= cur;
        }

        if(y%cur != 0)
            continue;
        while(tmp2%cur == 0)
        {
            cury++;
            tmp2 /= cur;
        }

        gc *= pow(cur, min(curx, cury));
    }

    cout<<gc<<endl;

    return 0;
}
