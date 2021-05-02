#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf prinf
#define pb push_back

ll ansmx, ansmn;
int main()
{
    int nm, pn;
    cin>>nm>>pn;
    vector<int> vec;

    for(int i = 1; i <= pn; ++i)
    {
        int x;
        sc("%d", &x);
        vec.pb(x);
    }

    vector<int> vecx(vec.begin(), vec.end());

    for(int i = 1; i <= nm; ++i)
    {
        sort(vec.begin(), vec.end(), greater<int>());
        ansmx += vec[0];
        vec[0] -= 1;
    }

    for(int i = 1; i <= nm; ++i)
    {
        sort(vecx.begin(), vecx.end());
        ansmn += vecx[0];
        vecx[0] -= 1;
        if(vecx[0] <= 0)
            vecx.erase(vecx.begin());
    }

    cout<<ansmx<<" "<<ansmn<<endl;

    return 0;
}
