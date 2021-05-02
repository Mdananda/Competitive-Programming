#include <bits/stdc++.h>
using namespace std;

int ans = 0;
int main()
{
    vector<int>vec;
    for(int i = 0; i < 5; ++i)
    {
        int p;
        scanf("%d", &p);
        ///vec.push_back(p);
        if(p >= 0 && p <= 4)
            ans++;
    }

    cout<<ans<<endl;

    return 0;
}
