#include <bits/stdc++.h>
using namespace std;

int main()
{
	int ts;
	cin>>ts;
	
	while(ts--)
	{
		int a, b, tmp;
		scanf("%d%d", &a, &b);
	    tmp = a%b;
		if(tmp == 0)
		cout<<0<<endl;
		else
		{
		cout<<b-tmp<<endl;	
		}	
		
	}
}
