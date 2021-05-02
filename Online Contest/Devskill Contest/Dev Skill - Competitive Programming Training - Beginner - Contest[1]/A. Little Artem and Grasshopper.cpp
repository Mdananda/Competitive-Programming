#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int indx, cur;

int main()
{
    int nm, cnt = 0;
    sc("%d", &nm);

    string ss;
    cin>>ss;
    vector<int> vec;

    for(int i = 1; i <= nm; ++i)
    {
        int x;
        sc("%d", &x);
        vec.pb(x);
    }

    while(indx >= 0 && indx < nm)
    {
        if(ss[indx] == '>')
            indx = indx+vec[indx];
        else
            indx = indx-vec[indx];
        cnt++;
        if(cnt > nm)
        {
            cur = 1;
            break;
        }
    }

    if(cur == 1)
        cout<<"INFINITE"<<endl;
    else
        cout<<"FINITE"<<endl;


    return 0;
}

