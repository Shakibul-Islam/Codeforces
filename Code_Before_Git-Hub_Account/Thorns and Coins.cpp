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
	int n; 		cin>>n;
	string s;
	cin>>s;

	int c = -1;
	for(int i = 1; i<n;i++){
		if(s[i-1] == s[i] && s[i] == '*'){
			c = i;
			break;
		}
	}
	int ans = 0;

	if(c == -1) c= n;
	for(int i = 0;i<c;i++){
		if(s[i] == '@'){
			ans++;
		}
	}
	cout<<ans<<endl;

}
//int32_t main()
int main(){
	int t;		cin>>t;
	while(t--){
		solve();
		//cout<<endl;
	}
}

