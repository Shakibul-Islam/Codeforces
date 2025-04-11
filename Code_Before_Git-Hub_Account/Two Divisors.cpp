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
	int a,b;  		cin>>a>>b;

	int lcm = (a*b)/ __gcd(a,b);
	if(b%a==0) lcm = (b*b)/a;
	cout<<lcm<<endl;

}
//
//int main()
int32_t main()
{
	int t;		cin>>t;
	while(t--){
		solve();
		//cout<<endl;
	}
}

