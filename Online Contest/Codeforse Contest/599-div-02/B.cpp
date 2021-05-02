#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pb push_back

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        sc("%d", &n);
        string s, t;
        cin>>s>>t;
        vector <int> vec;
        for(int i = 0; i < n; i++)
        {
            if(s[i] != t[i])
                vec.pb(i);
        }

        if(vec.size() != 2)
            cout<<"No"<<endl;
        else
        {
            if(s[vec[0]] == s[vec[1]] && t[vec[0]] == t[vec[1]])
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }

    }



    return 0;
}
