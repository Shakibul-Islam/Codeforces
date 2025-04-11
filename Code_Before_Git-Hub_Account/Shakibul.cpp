
#include <iostream>

#include <bits/stdc++.h>

// #include "utilities.cpp"

using namespace std;

#define int long long

#define pb push_back

#define all(x) x.begin(), x.end()

#define rall(x) x.rbegin(), x.rend()

#define forn(i, x, n) for (int i = x; i < n; i++)

#define vi vector<int>

#define vpp vector<pair<int,int>>

#define vs vector<string>

#define vll vector<long long>

#define ss second

#define ff first

int row[] = {1,0,-1,0};

int col[] = {0,1,0,-1};

const int mod = 998244353;





void solve(){  



    int n;

    cin>>n;



    vector<set<int>> arr;

    set<int> st;



    for(int i=0; i<n; i++){



        int k;

        cin>>k;



        set<int> tempst;

        while(k--){

            int x;

            cin>>x;

            tempst.insert(x);

            st.insert(x);

        }

        arr.pb(tempst);

    }



    int ans = 0;

    for(auto it: st){



        set<int> tempSt;

        for(auto i: arr){

            if(i.count(it) == 0){



                for(auto j: i) tempSt.insert(j);

            }

        }

        ans = max(ans, (int)tempSt.size());

    }

    cout<<ans<<'\n';

}







signed main(){



    std::ios_base::sync_with_stdio(false);

    cin.tie(NULL);

    cout.tie(NULL);

    int t = 1;

    cin >> t;

    while (t--) solve();

    return 0;



} 
