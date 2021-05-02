#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main()
{
    int n;
    cin>>n;
    vector<int> vec;

    for(int i = 1; i <= n; ++i)
    {
        int x;
        scanf("%d", &x);
        vec.push_back(x);
    }

    if(n%2 == 1 && vec[0]%2 == 1 && vec[n-1]%2 == 1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
