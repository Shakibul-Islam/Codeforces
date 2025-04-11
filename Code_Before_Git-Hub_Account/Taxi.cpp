#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n,sum = 0;
    cin >> n;
    vector<int> s(n);
    

     for (int i = 0; i < n; i++)
    {
        cin>> s[i];
        sum += s[i];
    }

    int taxi = sum / 4;

    if(sum % 4 != 0){
        taxi++;
    }
    cout <<taxi<<endl; 
    
}