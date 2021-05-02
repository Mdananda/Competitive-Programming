#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll a, b, n, sum, s = 100000005;
    cin>>n;
    char ch[100], str[] = "ACTG";
    cin>>ch;
    int l = 0;
    for(int i = 0; i < n; ++i)
    {
        if(n-i < 4)
            break;
        int k = 0, sum = 0;
        for(int j = i; j < i+4; ++j)
        {
            a = abs(ch[j]-str[k]);
            if(a > 13)
            {
                sum += (26-a);
            }
            else
                sum += a;
            k++;
        }
        if(sum < s)
            s = sum;
    }
    cout<<s<<endl;

    return 0;
}
