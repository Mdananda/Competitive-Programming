#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 100003;
const int mx = 1e5+5;

int fc[1000006];

ll BigMod(int n, int k)
{
	if(k == 0)
	return 1;
	ll rr = BigMod(n, k/2);
	rr = (rr*rr)%mod;
	if(k%2 == 1)
	rr = (n*rr)%mod;

	return rr;
}

ll ncr(int n, int k)
{
	ll tmp = fc[n];
	tmp = (tmp*BigMod(fc[k], mod-2))%mod;
	tmp = (tmp*BigMod(fc[n-k], mod-2))%mod;

	return tmp;
}


int main()
{
	fc[0] = 1;
	fc[1] = 1;
	for(int i = 1; i <= mx; ++i)
	fc[i] = fc[i-1]*i;

///	cout<<BigMod(4, 2)<<endl;

	cout<<ncr(4, 3)<<endl;


	return 0;
}
