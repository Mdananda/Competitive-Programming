#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int ts;
    cin>>ts;
    while(ts--)
    {
        vector <int> vec;
        int nm, mx;
        sc("%d%d", &nm, &mx);

        for(int i = 1; i <= nm; ++i)
        {
            int x;
            sc("%d", &x);
            vec.pb(x);
        }

        ll i, indx, sum = 0;

        for(i = 0; i < nm; ++i)
        {
            sum += vec[i];
            if(sum > mx)
            {
                indx = i+1;
                break;
            }
        }

        if(i == nm)
        {
            cout<<0<<endl;
            continue;
        }
        nm = indx;
        indx = sum = 0;

        for(int i = 0; i < nm; ++i)
        {
            if(vec[i] > sum)
            {
                indx = i;
                sum = vec[i];
            }
        }

        cout<<indx+1<<endl;
    }

    return 0;
}
