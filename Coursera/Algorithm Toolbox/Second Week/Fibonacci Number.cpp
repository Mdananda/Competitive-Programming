#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf

int main()
{
    int nm, ar[100];
    cin>>nm;
    ar[0] = 0;
    ar[1] = 1;

    for(int i = 2; i <= nm; ++i)
        ar[i] = ar[i-1] + ar[i-2];
    cout<<ar[nm]<<endl;

    return 0;
}
