#include <bits/stdc++.h>
using namespace std;

vector <int> vec;
int fnc(int x)
{
    int t;
    for(int i = 1; i < vec.size(); ++i)
    {
        if((vec[i]-vec[i-1]) > x)
        {
            t = 0;
            break;
        }
        if((vec[i]-vec[i-1])  ==  x)
        {
            x--;
        }
        t = 1;
    }

    return t;
}

int main()
{
    int n;
    cin>>n;

    for(int i = 1; i <= n; ++i)
    {
        int p;
        scanf("%d", &p);
        vec.push_back(p);
    }
    int lo = 1, hi = 10e7;
    while(hi-lo > 1)
    {
        int mid = (hi+lo)/2;
        int midval = fnc(mid);
        if(midval == 1)
            hi = mid;
        else
            lo = mid;
    }
    if(lo == 1)
        cout<<lo<<endl;
    else
        cout<<hi<<endl;


    return 0;
}
