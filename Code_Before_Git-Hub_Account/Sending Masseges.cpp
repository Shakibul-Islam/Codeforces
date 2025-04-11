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

	  int n,f,a,b; 			cin>>n>>f>>a>>b;
	  std::vector<int> v(n);

	  for (int i = 0; i < n; ++i)    cin>>v[i];

	  int previous = 0,mini= INT_MAX;

	  for(int i = 0;i<n;i++) {
	  	mini = min(b,abs(previous - v[i]) *a);
	  	f -= mini;
	  	previous = v[i];
	  }
	  if(f>0)yes;
	  else no;

}
int main(){
	int t;		cin>>t;
	while(t--){
		solve();
		//cout<<endl;
	}
}

