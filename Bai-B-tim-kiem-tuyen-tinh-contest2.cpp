#include<iostream>
using namespace std;
int BinarySearch(int a[], int n, int k)
{
	for(int i=1;i<=n;i++)
	{
		if(a[i]==k)return i;
	}
	return -1;
}

int main()
{
	int a[100001],n,k;
	int t;
	cin>>t;
	while(t--)
	{
	cin>>n>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
		if(BinarySearch(a,n,k)== -1)cout<<"NO"<<endl;
		else cout<<BinarySearch(a,n,k)<<endl;
	}
	return 0;
}
