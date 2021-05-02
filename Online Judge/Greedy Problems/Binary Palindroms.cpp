#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int n;
    sc("%d", &n);
    vector<string> vec;
    for(int i = 1; i <= n; ++i)
    {
        string s;
        cin>>s;
        vec.pb(s);
    }

    int one, two, cnt;
    one = two = cnt = 0;
    vector<int> sz;
    for(int i = 0; i < n; ++i)
    {
        int ln = vec[i].size();
        sz.pb(ln);
        for(int j = 0; j < ln; ++j)
        {
            if(vec[i][j] == '1')
                one++;
            else
                two++;
        }
    }

    for(int i = 0; i < n; ++i)
    {


    }



    return 0;
}
