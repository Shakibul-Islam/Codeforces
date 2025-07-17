#include <bits/stdc++.h>
using namespace std;

bool isPerfectSquare(int n){
    int root = sqrt(n);
    return root * root == n; 
}

int main (){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(isPerfectSquare(n)){

           int x = sqrt(n);
           cout<<0<<" "<< x<<endl;
              
        }
        else cout<<-1<<endl;

    }

}