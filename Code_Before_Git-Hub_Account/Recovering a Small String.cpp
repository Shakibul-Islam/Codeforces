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
	std::vector<char> v(27);
	char ch = 'a';
	for(int i =1;i<=26;i++){
		v[i] = ch++;
	}

	if(n<29){
		int t = n-2;
		cout<<"aa"<<v[t]<<endl;
	}
	else if(n<54){
		n-=26;
		int t = n-1;
		cout<<"a"<<v[t]<<"z"<<endl;
	}
	else{
		n = n-52;
		int t = n;
		cout<<v[t]<<"zz"<<endl;
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

