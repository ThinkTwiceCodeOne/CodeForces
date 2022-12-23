#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int m,s;
		cin>>m>>s;
		set<int> st;
		for(int i=0;i<m;i++)
		{
			int num;
			cin>>num;
			st.insert(num);
		}
		int i=1;
		while(1)
		{
			if(st.find(i)==st.end())
			{
				s=s-i;
				st.insert(i);
			}
			if(s<=0) break;
			i++;
		}
		if(s==0)
		{
			int sum=0;
			for(auto it:st) sum+=it;
			int n=st.size();
			if(sum==(n*(n+1)/2)) cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}
