#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf

int main()
{

     int nm, lo = 1, hi = 10, arr[100];

     while(hi-lo > 1)
     {
         int mid = (lo+hi)/2;
         if(arr[mid] >= nm)
            hi = mid;
         else if(arr[mid] < nm)
            lo = mid+1;
     }

     if(arr[lo] >= nm)
        pf("Yes");
     else if(arr[hi] >= nm)
        pf("Yes");
     else
        pf("No");

    return 0;
}
