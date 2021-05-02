#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define sc scanf
#define pf printf
#define pb push_back

int main()
{
    int T, tc = 1;
    sc("%d", &T);
    while(T--)
    {
        string ss;
        deque<int> dd;
        int nm, np, tmp;
        sc("%d%d", &nm, &np);
        pf("Case %d:\n", tc);
        for(int i = 1; i <= np; ++i)
        {
            cin>>ss;
            if(ss == "pushLeft")
            {
                sc("%d", &tmp);
                if(dd.size() == nm)
                    pf("The queue is full\n");
                else
                {
                    pf("Pushed in left: %d\n", tmp);
                    dd.push_front(tmp);
                }
            }
            else if(ss == "pushRight")
            {
                sc("%d", &tmp);
                if(dd.size() < nm)
                {
                    pf("Pushed in right: %d\n", tmp);
                    dd.push_back(tmp);
                }
                else
                    pf("The queue is full\n");
            }
            else if(ss == "popLeft")
            {
                if(!dd.empty())
                {
                    tmp = dd.front();
                    dd.pop_front();
                    pf("Popped from left: %d\n", tmp);
                }
                else
                    pf("The queue is empty\n");
            }
            else if(ss == "popRight")
            {
                if(!dd.empty())
                {
                    tmp = dd.back();
                    dd.pop_back();
                    pf("Popped from right: %d\n", tmp);
                }
                else
                    pf("The queue is empty\n");
            }
        }
        tc++;
    }

    return 0;
}
