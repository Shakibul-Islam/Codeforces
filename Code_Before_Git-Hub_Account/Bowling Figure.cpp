#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string shakib,W,R;
        cin>>shakib;
        int ball=0, over=0,run=0,wicket=0;
        ball = shakib.size();
        over = ball/6;
        ball = abs((over *6)-ball);

        for(char c:shakib)
        {
            if(c=='0'|| c== '1' || c== '2' || c== '3' || c== '4' || c== '5'|| c== '6')
            {
                run += (c-'0');
            }
        }
        for(int i = 0;i<shakib.size();i++)
        {
            if(shakib[i]=='W')
            {
                char c = shakib[i];
                W.push_back(c);
            }
            else
                continue;
        }
        wicket = W.size();

        if(over>=1 && ball >0)
        {
            cout<<over<<"."<<ball<<" Overs ";
        }
        else
        {
            cout<<over<<"."<<ball<<" Over ";
        }
        if(run>1)
        {
            cout<<run<<" Runs ";
        }
        else
        {
            cout<<run<<" Run ";
        }
        if(wicket>1)
        {
            cout<<wicket<<" Wickets.";
        }
        else
        {
            cout<<wicket<<" Wicket.";
        }
        cout<<endl;
    }
}

