#include<bits/stdc++.h>
using namespace std;
#define ll long long
// #define int long long

#define all(v)	v.begin(),v.end()
#define f0_n for(int i=0;i<n;i++)
#define fn_0 for (int i = n; i >0; i--)

#define pb(a) push_back(a)
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
const int N = 1e5+10;
const int M = 1e9+7;


// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
int compare(string s, string s1){
	int n = s.size();
	f0_n{
		if(s[i]>s1[i]) return 0;
		else if (s[i]<s1[i]) return 1;
	}
 return 2;
}

void solve(){
	int x; cin>>x;
	string s, s1,s2;
	cin>>s;
	s1 = s;

	reverse(all(s1));
	int o = compare(s,s1);
	if(o == 2){
        cout<<s<<endl;
        return;
	}

	if(!o){
		if(x%2 ==0 ){
			cout<<s1+s<<endl;
		}
		else cout<<s1<<endl;
	}
	else{
		if(x%2 == 0){
			cout<<s<<endl;
		}
		else cout<<s1+s<<endl;
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

