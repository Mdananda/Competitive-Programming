#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define pb push_back

int main()
{
    int n, md;
    vector<int> vec1, vec2, vec3;
    cin>>n>>md;
    for(int i = 0; i < n; ++i)
    {
        int x;
        cin>>x;
        vec1.pb(x);
    }

    for(int i = 0; i < n; ++i)
    {
        int x;
        cin>>x;
        vec2.pb(x);
    }

    sort(vec1.begin(), vec1.end());
    sort(vec2.begin(), vec2.end());

    for(int i = 0; i < n; ++i)
        vec3.pb((abs(vec2[0]-vec1[i]))%md);

    sort(vec3.begin(), vec3.end());

    cout<<vec3[0]<<endl;

    return 0;
}
