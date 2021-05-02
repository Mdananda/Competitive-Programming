#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int ar[n];

    for(int i = 0; i < n; ++i)
        cin>>ar[i];

    for(int i = 0; i < n; ++i)
    {
        int j = i;
        while(j > 1&& (ar[j] > ar[j+1]))
        {
            swap(ar[j], ar[j+1]);
            j--;
        }

    }

    for(int i = 0; i < n; ++i)
        cout<<ar[i]<<" ";

    cout<<endl;

    return 0;
}
