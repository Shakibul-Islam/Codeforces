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
    int n;  cin>>n;
    map<int ,string>m ; bool f= 0;
    for(int i = 0;i<2*n -2;i++){
        string x ; cin>>x;
        if(m.find(x.size())!= m.end()){
            reverse(x.begin(),x.end());
            if(m[x.size()] != x){
                f=1;
            }
            reverse(x.begin(),x.end());
        }
        m[x.size()] = x;
    }
    if(!f) yes;
    else no;
}


int main(){
	int t;		cin>>t;
	while(t--){
		solve();
		//cout<<endl;
	}
}
