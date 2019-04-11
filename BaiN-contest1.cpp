#include<iostream>
using namespace std;
int n,a[20],OK=1;
int Next(int n,int a[20])
{
	int i=n;
	while(i>0&&a[i]==9)
	{
		a[i]=0;
		i--;
	}
	if(i>0)a[i]=9;
	else OK=0;
}

long long Tong(int n,int a[20])
{
	long long tong=0;
	for(int i=1;i<=n;i++)
	{
		tong=tong*10+a[i];
	}
	return tong;
}

int Result(int n,int a[20])
{
	for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<endl;
}

int main()
{
	int t;
	cin>>t;
	int x;
	while(t--)
	{
		cin>>x;
		for(int n=1;n<=20;n++)
		{
			int a[20];
			for(int i=1;i<n;i++)
			{
				a[i]=0;
			}
			a[n]=9;
			OK=1;
			int kt=1;
			while(OK)
			{
				if(Tong(n,a)%x==0)
				{
					cout<<Tong(n,a)<<endl;
					kt=0;
					break;
				}
				Next(n,a);
			}
			if(kt==0)break;
		}
	}
}
