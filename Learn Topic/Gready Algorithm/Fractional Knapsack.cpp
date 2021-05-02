#include <bits/stdc++.h>
using namespace std;

pair <int, int> arr[1000];
pair <double, int> ratios[1000];

int main()
{
    int n, w;
    cin>>n>>w;

    for(int i = 1; i <= n; ++i)
    {
        scanf("%d%d", arr[i].first, arr[i].second);
        ratios[i].first = (double)arr[i].second/(double)arr[i].first;
        ratios[i].second = i;
    }

    sort(ratios+1, ratios+n+1);
    reverse(ratios+1, ratios+n+1);



    return 0;
}
