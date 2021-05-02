#include <bits/stdc++.h>
using namespace std;

int cnt;
int main()
{
    int ar[] = {1, 2, 3, 4};

    do
    {
        cout<<ar[0]<<" "<<ar[1]<<" "<<ar[2]<<" "<<ar[3]<<endl;
        cnt++;
    }
    while(next_permutation(ar, ar+4));

    cout<<cnt<<endl;

    return 0;
}
