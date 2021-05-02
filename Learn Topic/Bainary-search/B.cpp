#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> vec, dif;
    int n;
    cin>>n;

    for(int i = 1; i <= n; ++i)
    {
        int p;
        scanf("%d", &p);
        vec.push_back(p);
    }
    /// sort(vec.begin(), vec.end(), greater<int>());

    int m;
    for(int i = 1; i < vec.size(); ++i)
    {
        m = vec[i]-vec[i-1];
        dif.push_back(m);
    }
    sort(dif.begin(), dif.end(), greater<int>());
    m = dif[0];
    ///cout<<dif.size()<<endl;
    for(int i = 1; i < dif.size(); ++i)
    {
        if(dif[i] == dif[i-1])
            m++;
    }

    cout<<m<<endl;

    return 0;
}
