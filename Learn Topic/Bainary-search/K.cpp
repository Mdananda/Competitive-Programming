#include <bits/stdc++.h>
using namespace std;

vector <int> vec;
int ans;
int main()
{
    int n;
    cin>>n;
    vec.push_back(ans);

    for(int i = 1; i <= n; ++i)
    {
        int p;
        scanf("%d", &p);
        ans += p;
        vec.push_back(ans);
    }

    int p;
    cin>>p;
    int pos = lower_bound(vec.begin(), vec.end(), p) - vec.begin();
    cout<<pos<<endl;



    return 0;
}
