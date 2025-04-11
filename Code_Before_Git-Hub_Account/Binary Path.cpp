#include<bits/stdc++.h>
using namespace std;
#define ll long long
// #define int long long

#define all(v)	v.begin(),v.end()
#define f0_n for(int i=0;i<n;i++)
#define fn_0 for (int i = n-1; i >=0; i--)

#define pb(a) push_back(a)
#define no cout<<"NO\n"
#define yes cout<<"YES\n"

bool sorta(const pair<ll,ll> &a,const pair<ll,ll> &b){return (a.second < b.second);}
bool sortd(const pair<ll,ll> &a,const pair<ll,ll> &b){return (a.second > b.second);}

const int N = 1e7+10;
const int M = 1e9+7;

char arr[3][N];


// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve(){
	int n; cin>>n;
	for(int i = 1;i<=2;i++){
		for(int j=1;j<=n;j++){
			cin>>arr[i][j];
		}
	}

	int max_down  = n, min_down = 1;
	for(int i = n;i>=2;i--){
		if(arr[1][i] == '1' && arr[2][i-1] == '0') max_down = i-1;
	}

	for(int i=1;i<max_down;i++){
		if(arr[2][i] == '1' && arr[1][i+1] == '0') min_down = i+1;
	}

	for(int i = 1;i<=max_down;i++){
		cout<<arr[1][i];
	}
	for(int i = max_down;i<=n;i++){
		cout<<arr[2][i];
	}
	cout<<endl;
	cout<<max_down-min_down+1<<endl;

}


//int32_t main()
int main(){

	int t;		cin>>t;

	while(t--){
		solve();
		//cout<<endl;

	}
}

