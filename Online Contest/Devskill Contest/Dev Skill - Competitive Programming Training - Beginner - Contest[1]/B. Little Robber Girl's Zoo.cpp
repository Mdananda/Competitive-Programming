#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int nm;
    sc("%d", &nm);
    vector<int> vec;

    for(int i = 1; i <= nm; ++i)
    {
        int x;
        sc("%d", &x);
        vec.pb(x);
    }

    for(int i = 1; i < nm; )
    {
        if(vec[i] < vec[i-1])
        {
            cout<<i<<" "<<i+1<<endl;
            i += 2;
        }
        else
        {
            int j;
            for(j = i+1; j < nm; ++j)
            {
                if((vec[j] < vec[j-1]) && ((j-i)+2)%2 == 0)
                {
                    cout<<i<<" "<<j+1<<endl;
                    i += (j+1)-i;
                    break;
                }
            }
            if(j == nm)
            {
                if((nm-i) > 2)
                    cout<<i<<" "<<(nm-1)<<endl;
                cout<<i+1<<" "<<nm<<endl;
                break;
            }
        }
    }



    return 0;
}
