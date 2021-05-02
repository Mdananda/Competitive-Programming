#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf

int main()
{
    string ss, s = "hello";
    cin>>ss;

    transform(ss.begin(), ss.end(), ss.begin(), ::tolower);

    int j = 0;
    for(int i = 0; i < ss.size(); ++i)
    {
        if(ss[i] == s[j])
            j++;
    }

    if(j == 5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;


    return 0;
}
