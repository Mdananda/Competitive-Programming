#include <bits/stdc++.h>
using namespace std;

vector <int> vec;
void seive()
{
    /// vec[0] = 1;
    for(int i = 0; i <= 30; ++i)
    {
        int ans = (2 << i)-1;
        vec.push_back(ans);
    }
}

int main()
{
    seive();
    int x, p, cnt = 0;
    cin>>x;
    p = x;

    for(int i = 1; i <= 40; ++i)
    {
        if(binary_search(vec.begin(), vec.end(), p) == 1)
        {
            cout<<cnt<<endl;
            for(int j = 1; j <= cnt; j++)
                cout<<j<<" ";
            if(cnt)
                cout<<endl;
            break;
        }
        p = p ^ ((2<<i)-1);
        p = p - 1;
        cnt++;
    }


    return 0;
}
