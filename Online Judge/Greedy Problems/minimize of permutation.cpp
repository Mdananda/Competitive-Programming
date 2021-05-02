#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        sc("%d", &n);

        vector<int> vec;
        vector<int>:: iterator it;

        for(int i = 1; i <= n; ++i)
        {
            int x;
            sc("%d", &x);
            vec.pb(x);
        }

        int ck = 0;
        while(ck < n)
        {
            int pos = min_element(vec.begin()+ck, vec.end())-vec.begin();
            int num = vec[pos];
            vec.erase(vec.begin()+pos);
            vec.insert(vec.begin()+ck, num);
            if(ck == pos) ck = pos + 1;
            else ck = pos;
        }

        for(int i = 0; i < vec.size(); ++i)
            cout<<vec[i]<<" ";
        cout<<endl;
    }


    return 0;
}
