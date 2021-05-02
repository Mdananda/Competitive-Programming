#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll md = 1e7+9;

#define sc scanf
#define pf printf
#define pb push_back

bool isprime[md];

void seive()
{
    for(int i = 2; i < md; ++i)
    {
        if(isprime[i])
            continue;
        for(int j = i+i; j < md; j += i)
            isprime[j] = true;
    }
}

int main()
{
    seive();
    int nm, cnt, ck, tmp;
    sc("%d", &nm);

    cnt = 4;

    while(1)
    {
        tmp = cnt+nm;
        if(isprime[tmp] == false)
            cnt += 2;
        else
        {
            cout<<tmp<<" "<<cnt<<endl;
            break;
        }
    }

    return 0;
}
