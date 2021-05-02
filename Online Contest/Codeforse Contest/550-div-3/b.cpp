#include <bits/stdc++.h>
using namespace std;

vector <int> vec1, vec2;
long long int sum;
int main()
{
    int n, ar[2000];
    cin>>n;
    for(int i = 0; i < n; ++i)
    {
        scanf("%d", &ar[i]);
        if(ar[i]%2 == 0)
            vec1.push_back(ar[i]);
        else
            vec2.push_back(ar[i]);
    }
    sort(vec1.begin(), vec1.end(), greater<int>());
    sort(vec2.begin(), vec2.end(), greater<int>());

    if(vec1.size() == vec2.size())
        cout<<"0"<<endl;
    else if(vec1.size() > vec2.size())
    {
        for(int i = vec2.size()+1; i < vec1.size(); ++i)
            sum += vec1[i];
        cout<<sum<<endl;
    }
    else
    {
        for(int i = vec1.size()+1; i < vec2.size(); ++i)
            sum += vec2[i];
        cout<<sum<<endl;
    }

    return 0;
}
