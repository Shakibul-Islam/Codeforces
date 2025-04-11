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
	string s ;
	cin>>s;
	sort(s.begin(),s.end());
	if(s[0] == '?'){
        if(s[1]=='A' && s[2] == 'B') cout<<'C'<<endl;
        else if(s[1]=='B' && s[2] == 'C') cout<<'A'<<endl;
        else if(s[1]=='A' && s[2] == 'C') cout<<'B'<<endl;
	}
}
//int32_t main()
int main(){
	int t;		cin>>t;
	t = t*3;
	while(t--){
		solve();
		//cout<<endl;
	}
}

