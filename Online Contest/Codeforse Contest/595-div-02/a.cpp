#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back
#define sc scanf

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, cur = 0;
        cin>>n;
        vector <int> vec;

        for(int i = 0; i < n; ++i)
        {
            int x;
            sc("%d", &x);
            vec.pb(x);
        }
       sort(vec.begin(), vec.end());

       for(int i = 1; i < n; ++i)
       {
           if(abs(vec[i-1]-vec[i])== 1)
            cur = 1;
       }
       if(cur == 1)
        cout<<"2"<<endl;
       else
        cout<<"1"<<endl;

    }

    return 0;
}
