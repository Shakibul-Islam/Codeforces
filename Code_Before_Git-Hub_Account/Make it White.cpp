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
	int n; 	cin>>n;
	string s; 	cin>>s;
	int ok = 0;
	int ans = 0;
	f0_n{
		if(s[i] == 'W' && ok == 0)
			continue;
		else if(s[i] == 'B' || ok == 1){
            ok = 1;
            ans++;
		} ok = 1;
	}
	for(int j = n-1; j>=0;j--){
		if(s[j] == 'W') ans--;
		if(s[j] == 'B') break;
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

