#include<bits/stdc++.h>
using namespace std;
#define int long long
int32_t main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n,p;
		cin>>n>>p;
		int a[n],b[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>a[i];
		}
		for (int i = 0; i < n; ++i)
		{
			cin>>b[i];
		}
		int ans = p;
		vector<pair<int,int>>v;
		for (int i = 0; i < n; ++i)
		{
			v.push_back({min(p,b[i]),a[i]});
		}
		sort(v.begin(), v.end());
		int person = n-1;
		for (int i = 0; i < n-1; ++i)
		{
			ans+= (min(v[i].second,person)) * (v[i].first);
			person -= (min(person,v[i].second));
		}
		cout<<ans<<endl;
	}
}
