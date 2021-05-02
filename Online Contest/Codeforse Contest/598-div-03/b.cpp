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
        int i, n, k;
        cin>>n;
        vector <int> vec;

        for(int i = 0; i < n; ++i)
        {
            int x;
            sc("%d", &x);
            vec.pb(x);
        }

        k = 1;
        i = 1;

        for(int j = 0; j < n; )
        {
            if(vec[j] == k && j != k-1)
            {
                swap(vec[j-1], vec[j]);
                i++;
                j = 0;
                if(i == n)
                    break;
                continue;
            }
            if(vec[j] == k && j == k-1)
            {
                k++;
                j = 0;
                if(k == n)
                    break;
            }
            if(j < 0)
                j = 0;
            j++;
        }

        /// cout<<i<<endl;
        for(int i = 0; i < n; ++i)
            cout<<vec[i]<<" ";
        cout<<endl;
    }


    return 0;
}
