#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		vector<int> v;
		v.push_back(a);
		v.push_back(b);
		v.push_back(d);
		v.push_back(c);
		int f=0;
		for(int i=0;i<4;i++)
		{
			a=v[0];
			b=v[1];
			d=v[2];
			c=v[3];
			if(a<b && c<d && a<c && b<d)
			{
				f=1;
				break;
			}
			rotate(v.begin(), v.begin()+v.size()-1, v.end());
		}
		if(f==0) cout<<"NO"<<endl;
		else cout<<"YES"<<endl;
	}
	return 0;
}
