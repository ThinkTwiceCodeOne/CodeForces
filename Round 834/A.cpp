#include<bits/stdc++.h>
using namespace std;
int main()
{
        int t;
        cin>>t;
        string g="";
        for(int i=0;i<50;i++) g+="Yes";
        while(t--)
        {
                string s;
                cin>>s;
                if(s=="YES" || s=="Yess" || s=="se") cout<<"NO"<<endl;
                else if(g.find(s)!=string::npos) cout<<"YES"<<endl;
                else cout<<"NO"<<endl;
        }
        return 0;
}
