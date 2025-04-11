#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define all(vsa)	vsa.begin(),vsa.end()
#define f0_n for(int i=0;i<n;i++)

#define f0_n1 for(int i = 0;i<n-1;i++)
#define f1_n  for(int i=1;i<n;i++)

#define pb(a) push_back(a)
#define arraylength(v) 	end(v)-begin(v)
#define no cout<<"NO\n"
#define yes cout<<"YES\n"

// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


//int32_t main()



void solve(){
	  int n;
	  cin>>n;
	  int v[n];
	  int zero = 0, neg = 0;

	  for (int i = 0; i < n;i++){
	  	cin>>v[i];
	  	if(v[i]<0) neg++;
	  	if(v[i] == 0) zero++;
	  }


	  if(zero >0 || neg %2 != 0) cout<<0<<endl;
	  else{
	  	cout<<1<<endl;
	  	cout<<1<<" "<<0<<endl;
	  }

}
int main(){
	int t;		cin>>t;
	while(t--){
		solve();
		//cout<<endl;
	}
}

