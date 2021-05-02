#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nm;
    cin>>nm;
    while(nm--)
    {
        int ans = 0;
        vector<int> vc;
        string ss;
        cin>>ss;
        for(int i = 0; i < ss.size(); ++i)
        {
            if(ss[i] == '0' && ans > 0)
            {
                vc.push_back(ans);
                ans = 0;
            }
            else if(ss[i] == '1')
                ans++;
        }
        if(ans > 0) vc.push_back(ans);
        ans = 0;
        sort(vc.begin(), vc.end(), greater<int>());
        for(int i = 0; i < vc.size(); i += 2)
            ans += vc[i];
        cout<<ans<<endl;
    }

    return 0;
}
