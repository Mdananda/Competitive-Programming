#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf pritnf
#define pb push_back

int main()
{
    int nm;
    cin>>nm;

    int ar[nm+1] = {0};
    int arr[nm+1] = {0};

    for(int i = 1; i <= nm; ++i)
    {
        int x;
        sc("%d", &x);
        ar[x] = i;
    }

    for(int i = 1; i <= nm; ++i)
    {
        int x;
        sc("%d", &x);
        arr[x] = i;
    }

    for(int i = 1; i <= nm; ++i)
    {
        cout<<arr[i]<<" ";
    }




    return 0;
}
