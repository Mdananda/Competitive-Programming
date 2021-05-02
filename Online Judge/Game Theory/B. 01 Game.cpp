#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        int on, zo, ans;
        string ss;
        cin>>ss;
        on = zo = 0;

        for(int i = 0; i < ss.size(); ++i)
        {
            if(ss[i] == '0')
                zo++;
            else
                on++;
        }

        ans = min(on, zo);
        if(ans%2 == 0)
            cout<<"NET"<<endl;
        else
            cout<<"DA"<<endl;
    }

    return 0;
}
