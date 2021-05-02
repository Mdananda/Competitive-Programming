#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define pb push_back
#define sc scanf

int main()
{
    int T, ans, cmp, np, pos, nm, cur, ch[100];
    vector<int> ar;
    cin>>T;
    while(T--)
    {
        cin>>nm;
        for(int i = 0; i < nm; ++i){
            sc("%d", &np);
            ar.pb(np);
        }
        sort(ar.begin(), ar.end(), greater<int>());
        cur = ar[0]+ar[1];
        sort(ar.begin(), ar.end());
        pos = ar[0] + ar[1];
        cmp = 0;
        for(; cur >= pos; cur--)
        {
            ans = 0;
            memset(ch, 0, sizeof(ch));
            for(int i = 0; i < nm; ++i)
            {
                if(ch[i])
                    continue;
                for(int j = 0; j < nm; ++j)
                {
                    if(i == j || ch[j] == 1)
                        continue;
                    if((ar[i] + ar[j]) == cur)
                    {
                        ch[i] = ch[j] = 1;
                        ans++;
                        break;
                    }
                }
            }
            if(ans >= cmp)
               cmp = ans;
        }
        cout<<cmp<<endl;
        ar.clear();
    }
    return 0;
}
