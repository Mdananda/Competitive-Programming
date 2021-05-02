#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int n, k, tmp;

    cin>>n>>k;
    vector<int> vec;
    tmp = k;

    for(int i = 1; i <= n; ++i)
    {
        int x;
        sc("%d", &x);
        vec.pb(x);
    }

    k = k-1;
    int nmm = vec[k];
    set<int> ss(vec.begin()+k, vec.end());
    if(ss.size() == 1)
    {
        int cnt = 1;
        for(int i = k-1; i > 0; --i)
        {
            if(vec[i] != vec[i-1])
                break;
            cnt++;
        }
        if(nmm == vec[k-1])
            cnt++;

        tmp = tmp - cnt;
        cout<<tmp<<endl;
    }
    else
        cout<<-1<<endl;


    return 0;
}
