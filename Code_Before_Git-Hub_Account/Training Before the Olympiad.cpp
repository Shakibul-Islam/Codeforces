#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long

#define all(v)	v.begin(),v.end()
#define f0_n for(int i=0;i<n;i++)

#define pb(a) push_back(a)
#define no cout<<"NO\n"
#define yes cout<<"YES\n"

// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


void solve(){
	int n; 		cin>>n;
	int ans = 0, even = 0, odd = 0;
	f0_n{
		int x; 		cin>>x;
		ans += x;
		if(x%2 == 1) odd++;
		else  even++;
		int d = odd/3;
		if(even == 0 && odd== 1) d =0;
		else if(odd %3 == 1) d = (odd+2)/3;
		cout<<ans-d<<' ';
	}
	cout<<endl;

}
//int main()
int32_t main()
{
	int t;		cin>>t;
	while(t--){
		solve();
		//cout<<endl;
	}
}

