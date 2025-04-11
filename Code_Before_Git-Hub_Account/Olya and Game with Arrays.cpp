#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fr for(int i = 0;i<n;i++)
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int sum = 0, fmin = INT_MAX, smin = INT_MAX;
		while(n--)
		{
			int m;
			cin>>m;
			int a[m];
			for(int i = 0;i<m;i++)
				cin>>a[i];
			sort(a,a+m);

			sum += a[1];

			fmin = min(fmin,a[0]);
			smin = min(smin,a[1]);

		}
		int ans = sum + fmin - smin;
		cout<<ans<<endl;
	}

}
