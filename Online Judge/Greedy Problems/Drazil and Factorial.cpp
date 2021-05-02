#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int n, k, p;
    sc("%d%d", &p, &n);
    vector<char>vec;

    while(n > 0)
    {
        k = (n%10);

        if(k%2 == 1 && k != 1)
        {
            vec.pb(k+48);
        }

        else if(k == 2)
        {
            vec.pb('2');
        }
        else if(k == 4)
        {
            vec.pb('3');
            vec.pb('2');
            vec.pb('2');
        }

        else if(k == 6)
        {
            vec.pb('5');
            vec.pb('3');
        }

        else if(k == 8)
        {
            vec.pb('2');
            vec.pb('2');
            vec.pb('2');
            vec.pb('7');
        }

        n = n/10;
    }

    sort(vec.begin(), vec.end(), greater<char>());

    for(int i = 0; i < vec.size(); i++)
        cout<<vec[i];
    cout<<endl;

    return 0;
}
