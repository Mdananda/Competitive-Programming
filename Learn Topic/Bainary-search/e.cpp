#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> vec;
    int n;
    cin>>n;

    for(int i = 1; i <= n; ++i)
    {
        int p;
        scanf("%d", &p);
        vec.push_back(p);
    }

    int p;
    cin>>p;
    int pos1 = lower_bound(vec.begin(), vec.end(), p) - vec.begin();
    if(vec[pos1] == p && (pos1-1) < 0)
        cout<<"x";
    else if(vec[pos1] == p)
        cout<<vec[pos1-1];
    else
        cout<<vec[pos1];

    pos1 = upper_bound(vec.begin(), vec.end(), p) - vec.begin();
    if(pos1 >= n)
        cout<<" x"<<endl;
    else
        cout<<" "<<vec[pos1]<<endl;

    return 0;
}
