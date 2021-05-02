#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int ar[100];

    for(int i = 0; i < n; ++i)
        cin>>ar[i];

    for(int i = 0; i < n; ++i)
    {
        int m = 1000000000;
        int k = i;
        for(int j = i; j < n; j)
        {
            if(ar[j] < m)
            {
                m = ar[j];
                k = j;
            }
        }
        ar[i] = m;
        swap(ar[i], ar[k]);
    }

    for(int i = 0; i < n; ++i)
        cout<<ar[i]<<endl;

    cout<<"My name is Ananda"<<endl;


    return 0;
}
