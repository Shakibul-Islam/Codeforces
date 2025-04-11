// Md. Shakibul Islam.
#include<bits/stdc++.h>
using namespace std;
#define ll long long
// #define int long long

#define all(v)	v.begin(),v.end()
#define in(v)  cin>>v[i]

#define f0_n for(int i=0;i<n;i++)
#define fn_0 for (int i = n-1; i >=0; i--)

#define fi_n(begin,end) for(int i = begin; i <= end; i++)
#define fn_i(end,begin) for(int i = end; i >= begin;i--)

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

char arr2[3][N];


// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);

void solve(){
	int n;  cin>>n;
	string s;
	cin>>s;

	string a = "pie", b = "map";
 int ans = 0;


 for(int i=0;i<n-2;i++){
 	if(s[i] == 'm' && s[i+1] == 'a' && s[i+2] == 'p'){
		i = i+2;//s.erase(i,3);
		ans++;
		continue;
	}
	else if(s[i] == 'p' && s[i+1] == 'i' && s[i+2] == 'e'){
		i = i+2;//s.erase(i,3);
		ans++;continue;
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

