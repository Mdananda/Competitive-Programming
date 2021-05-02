#include <bits/stdc++.h>
using namespace std;

vector <int> vec;
int main()
{
    int n, l;
    cin>>n>>l;

    for(int i = 1; i <= n; ++i)
    {
        int a, b, p = 1e7;
        cin>>a>>b;
        int m = max(a, l);

        for(int j = a; j <= 1000000; j += b)
        {
            int d = j - l;
            if(d < p && d >= 0){
                p = d;
            }
        }
        vec.push_back(p);
    }

    int k, p = 1e7;
    for(int i = 0; i < vec.size(); ++i)
    {
        if(vec[i] < p)
        {
            p = vec[i];
            k = i;
        }
    }

    cout<<k+1<<endl;

    return 0;
}
