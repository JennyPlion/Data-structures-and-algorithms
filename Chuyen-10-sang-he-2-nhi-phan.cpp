#include<iostream>
using namespace std;
void change(int n)
{
	int i=0,a[1000];
	while(n>0)
	{
		a[i]=n%2;
		n=n/2;
		i++;
	}
	for(int j=i-1;j>=0;j--)
	{
		cout<<a[j];
	}
	cout<<endl;
}

int main()
{
	int t,n, a[1000];
	cin>>t;
	while(t--)
	{
		cin>>n;
		change(n);
	}
}
