#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
	ll t;

	cin>>t;
	while(t--)
	{
		ll n, k;
		cin>>n>>k;
		ll a[n+1];
		a[0] = 0;
		for(int i = 1;i<n+1;i++)
		{
			cin>>a[i];
		}
		ll maximum = 0;
		bool flag = 0;
		for (int i = 0; i <n; i++)
		{
			maximum = max(maximum, (a[i+1]-a[i]));
			flag =1;
		}
		if(flag){
			ll maximum2 = max(maximum, maximum2);

		}
		cout<<maximum<<endl;

	}
}
