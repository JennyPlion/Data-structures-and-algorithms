#include<iostream>
using namespace std;
int n,m,k,a[1000],b[1000],c[2000];
int Nhap(int a[],int n)
{
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
}

int TronMang(int a[],int b[], int c[], int n, int m, int &l)
{
	
	for(int i=1;i<=n;i++)
	{
		c[l]=a[i];
		l++;
	}
	for(int i=1;i<=m;i++)
	{
		c[l]=b[i];
		l++;
	}
}

int SapXep(int a[],int n)
{
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
				int tg=a[j];
				a[j]=a[j+1];
				a[j+1]=tg;
			}
		}
	}
}

int Xuat(int a[], int n, int k)
{
	for(int i=1;i<n;i++)
	{
		if(i==k)cout<<a[i];
	}
}

int main()
{
	int t;
	cin>>t;
	
	while(t--)
	{
		int l=1;
		cin>>n>>m>>k;
		Nhap(a,n);
		Nhap(b,m);
		TronMang(a,b,c,n,m,l);
		SapXep(c,l);
		Xuat(c,l,k);
	}
	return 0;
}
