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

// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


void solve(){

	int a,b,l; 		cin>>a>>b>>l;
	int x= 0;
	set<int> k;
	while(true){
		if(int(pow(a,x))>l) break;
		if((l%int(pow(a,x)))!=0) break;

		ll curr = l/ int(pow(a,x));
		k.insert(curr);
			while(curr%b == 0){
				curr /= b;
				k.insert(curr);
			}
			x++;
	}
	cout<<k.size()<<endl;




}
//int32_t main()
int main(){
	int t;		cin>>t;
	while(t--){
		solve();
		//cout<<endl;
	}
}

