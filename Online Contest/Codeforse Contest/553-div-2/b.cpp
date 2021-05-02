#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, l, a, p , q;
    cin>>n>>m;
    int mat[n][m];

    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
            cin>>mat[i][j];
    }
    set<int>s;
    set<int>:: iterator it;
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            s.insert(mat[i][j]);
        }
        vector<int>v(s.begin(), s.end());
        a = v.size();
        if(i > 0)
        {
            p += a;
            it = (s.begin()+p);
            ///it = it + p;
            q = *it ^ l;
            p++;
            s.insert(q);
            l = q;
        }
    }


    cout<<a<<endl;


    return 0;
}
