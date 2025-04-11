// Md. Shakibul Islam.
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int long long

#define all(v)	v.begin(),v.end()
#define in(v)  cin>>v[i]

#define f0_n for(int i=0;i<n;i++)
#define fn_0 for (int i = n-1; i >=0; i--)

#define fi_end(begin,end) for(int i = begin; i <= end; i++)
#define fend_i(end,begin) for(int i = end; i >= begin;i--)

#define pb(a) push_back(a)
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define el  cout<<"\n";  // el = endl;

#define ifelse(big,small)   (big>small)?cout<<r:cout<<0; cout<<endl;

bool sorta(const pair<ll,ll> &a,const pair<ll,ll> &b){return (a.second < b.second);}
bool sortd(const pair<ll,ll> &a,const pair<ll,ll> &b){return (a.second > b.second);}

const int N = 1e5+10;
const int M = 1e9+7;

int arr[N];

int dx[4] = {-1,1,-1,1},   dy[4] = {-1,-1,1,1};


// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve(){
	int n,k;  cin>>n>>k;

	if(k>= (n-1)) cout<<1<<endl;

	else cout<<n<<endl;



}


int32_t main(){
//int main(){

	int t;		cin>>t;

	while(t--){
		solve();
		//cout<<endl;

	}
}

