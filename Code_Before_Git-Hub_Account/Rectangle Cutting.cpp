#include<bits/stdc++.h>
using namespace std;
#define ll long long
// #define int long long

#define all(v)	v.begin(),v.end()
#define f0_n for(int i=0;i<n;i++)

#define pb(a) push_back(a)
#define no cout<<"NO\n"
#define yes cout<<"YES\n"

// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


void solve(){
	int a,b; 		cin>>a>>b;
	if(a%2!=0 && b%2!=0) no;
	else if(a%2==0 && b%2==0) yes;
	else {
		int x;
		if(a%2 ==0) x = a;
		else x = b;

		int y;
		if(a%2 ==0) y = b;
		else y = a;
		x = x/2;
		if(x == y) no;
		else yes;
	}

}
//int32_t main()
int main(){
	int t;		cin>>t;
	while(t--){
		solve();
		//cout<<endl;
	}
}

