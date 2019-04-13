#include<iostream>
using namespace std;
int BinarySearch(int a[], int n, int k)
{
	int left=0;
	int right=n-1;
	while(left<=right)
	{
		int mid=(left+right)/2;
		if(k==a[mid])return mid+1;
		else if(k<a[mid])right=mid-1;
		else if(k>a[mid])left=mid+1;
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
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
		if(BinarySearch(a,n,k)== -1)cout<<"NO"<<endl;
		else cout<<BinarySearch(a,n,k)<<endl;
	}
	return 0;
}
