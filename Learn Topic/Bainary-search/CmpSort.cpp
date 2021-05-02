#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define scanf sc
#define printf pf

bool cmp(const pair<int, int> &p1,const pair<int, int> &p2)
{
    if(p1.first > p2.first)
      return true;
}

int main()
{
    vector<pair<int, int> > vec;
    vec.push_back(make_pair(1, 2));
    vec.push_back(make_pair(12, 22));
    vec.push_back(make_pair(11, 23));
    vec.push_back(make_pair(50, 12));
    vec.push_back(make_pair(14, 21));
    vec.push_back(make_pair(71, 27));
    vec.push_back(make_pair(18, 28));

    sort(vec.begin(), vec.end(), cmp);

    cout<<vec[0].first<<" "<<vec[0].second<<endl;


    return 0;
}
