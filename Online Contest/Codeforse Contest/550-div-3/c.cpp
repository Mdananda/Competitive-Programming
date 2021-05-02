#include <bits/stdc++.h>
using namespace std;

int cnt[200000];
vector <int> vec1, vec2;
int main()
{
    int i, n, ar[200000];
    cin>>n;

    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &ar[i]);
        cnt[ar[i]]++;
    }
    sort(ar, ar+n);
    sort(cnt, cnt+200000, greater<int>());
    if(cnt[0] > 2)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    if(cnt[0] == 1)
    {
        printf("YES\n1\n%d\n%d\n", ar[0], n-1);
        for(int i = n-1; i > 0; i--)
            printf("%d ", ar[i]);
        cout<<endl;
        return 0;
    }
    else
    {
        cout<<"YES"<<endl;
        for(i = 1; i < n; ++i)
        {
            if(ar[i] == ar[i-1])
                vec1.push_back(ar[i-1]);
            else
                vec2.push_back(ar[i-1]);
        }
        vec2.push_back(ar[i-1]);
        cout<<vec1.size()<<endl;
        for(int i = 0; i < vec1.size(); ++i)
            printf("%d ", vec1[i]);
        sort(vec2.begin(), vec2.end(), greater <int>());

        printf("\n%d\n", vec2.size());
        for(int i = 0; i < vec2.size(); ++i)
            printf("%d ", vec2[i]);
        cout<<endl;

    }

    return 0;
}
