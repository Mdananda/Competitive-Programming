#include <bits/stdc++.h>
using namespace std;

int main()
{
	int ts;
	cin>>ts;
	while(ts--){
	int n, ans = 0;
	cin>>n;
	vector<int> vec;
	vector<int> ck(200010, 0);
	set<int> cnt;
	
	for(int i = 1; i <= n; ++i)
	{
		int x;
		scanf("%d", &x);
		vec.push_back(x);
		ck[x]++;
		if(ck[x] >= 2)
		cnt.insert(x);
	}
	
    set<int> flg(cnt.begin(), cnt.end());
	int sz = cnt.size();
	sort(ck.begin(), ck.end(), greater<int>());
	if(ck[0] >= 3){
	cout<<"0"<<endl;
	continue;
    }
	else
	{
		for(int i = 0; i < sz; ++i)
		{
			set<int>::iterator it = cnt.find(vec[i]);
			if(it == cnt.end())
			break;
			else
			cnt.erase(it);
		}
		if(cnt.empty())
		ans++;
		
		reverse(vec.begin(), vec.end());
		for(int i = 0; i < sz; ++i)
		{
			set<int>::iterator it = flg.find(vec[i]);
			if(it == flg.end())
			break;
			else
			flg.erase(it);
		}
		if(flg.empty())
		ans++;	
	}
	
	sort(vec.begin(), vec.end(), greater<int>());
	int i;
	for(i = 0; i < vec[0]; ++i)
	{
		if(ck[i] == 0)
		break;
	}
	if(i < vec[0])
	ans = 0;	
	cout<<ans<<endl;
	if(ans == 1)
	{
		if(cnt.empty())
		cout<<sz<<" "<<vec[0]<<endl;
		else
		cout<<vec[0]<<" "<<sz<<endl;
	}
	else if(ans == 2)
	{
	
		cout<<sz<<" "<<vec[0]<<endl;
		cout<<vec[0]<<" "<<sz<<endl;
	}
	
    }
	
	return 0;
}

