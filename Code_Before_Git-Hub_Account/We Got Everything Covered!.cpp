#include<bits/stdc++.h>
using namespace std;
#define ll long long

#define all(vsa)	vsa.begin(),vsa.end()
#define f0_n for(int i=0;i<n;i++)

#define f0_n1 for(int iiii = 0;iiii<nnnn-1;iiii++)
#define f1_n  for(int ii=1;ii<nn;ii++)

#define pb(a) push_back(a)
#define arraylength(v) 	end(v)-begin(v)
#define no cout<<"NO\n"
#define yes cout<<"YES\n"

// #define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);


//int32_t main()

void solve(){
    int n,k ;       cin>>n>>k;
    string s= "";
    char ch='a';
    while(k--){
        s += ch;
        ch++;
    }
    string ans = "";
    while(n--){
        ans +=s;
    }
    cout<<ans<<endl;

}




int main(){
	int t;		cin>>t;
	while(t--){
		solve();
		//cout<<endl;
	}
}

