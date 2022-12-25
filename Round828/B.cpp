#include<iostream>
#include<vector>
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n,q;
cin>>n>>q;
vector<int> v(n);
long long int evenSum=0;
long long int oddSum=0;
for(int i=0;i<n;i++)
{
cin>>v[i];
if(v[i]%2==0) evenSum+=v[i];
else oddSum+=v[i];
}
long long int totalSum=evenSum+oddSum;
int evenSize=0;
int oddSize=0;
for(int i=0;i<n;i++)
{
if(v[i]%2==0) evenSize++;
else oddSize++;
}
while(q--)
{
int type,x;
cin>>type>>x;
if(type==1)
{
if(x%2==0)
{
oddSum=oddSum+oddSize*x;
}
else
{
evenSum+=oddSum+oddSize*x;
evenSize+=oddSize;
oddSum=0;
oddSize=0;
}
}
else
{
if(x%2==0)
{
evenSum=evenSum+evenSize*x;
}
else
{
oddSum+=evenSum+evenSize*x;
oddSize+=evenSize;
evenSum=0;
evenSize=0;
}
}
cout<<evenSum+oddSum<<endl;
}
}
return 0;
}
