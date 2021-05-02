#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int ts, n;
    cin>>ts;

    while(ts--)
    {
        vector<int> vec;
        cin>>n;

        for(int i = 1; i <= n; ++i)
        {
            int x;
            sc("%d", &x);
            vec.pb(x);
        }

        sort(vec.begin(), vec.end(), greater<int>());

        for(int i = 0; i < n; ++i)
            pf("%d ", vec[i]);
        cout<<endl;
    }


    return 0;
}
