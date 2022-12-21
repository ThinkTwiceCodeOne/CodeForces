#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int k,n;
		cin>>k>>n;
		vector<int> v;
		v.push_back(1);
		int diff=1;
		for(int i=2;i<=k;i++)
		{
			int next=v.back()+diff;
			int remElements=n-next;
			int remPlaces=k-i;
			if(remElements>=remPlaces)
			{
				v.push_back(next);
				diff++;
			}
			else v.push_back(v.back()+1);
		}
		for(auto it:v) cout<<it<<" ";
		cout<<endl;
	}
}
