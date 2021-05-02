#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;
    int n;
    cin>>n;
    int ar[n];
    for(int i = 0; i < n; ++i)
    {
        int x;
        cin>>x;
        s.insert(x);
    }
    vector<int>v(s.begin(), s.end());
    if(v.size() > 3)
    {
        cout<<"-1"<<endl;
        return 0;
    }
    for(int i = 0; i < v.size()-1; ++i)
    {
        ar[i] = v[i+1]-v[i];
    }
    n = v.size()-1;
    set<int>s1(ar, ar+n);
    if(s1.size() == 1 && n > 1)
        cout<<ar[0]<<endl;
    else if(s1.size() > 1)
        cout<<"-1"<<endl;
    else if(n == 1)
    {
        if(ar[0]%2 == 0)
            cout<<ar[0]/2<<endl;
        else
            cout<<ar[0]<<endl;
    }
    else
        cout<<"0"<<endl;

    return 0;
}
