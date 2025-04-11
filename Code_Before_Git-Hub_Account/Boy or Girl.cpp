#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string hero;
    cin >> hero;
    set <char>st;
    for(int i = 0; i<hero.size();i++){
        st.insert(hero[i]);
    }
    if(st.size() %2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
        cout<<"IGNORE HIM!"<<endl;
}
