#include<iostream>
using namespace std;
int n,a[20],OK=1;
void Next(int a[20], int n)
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

long long Tong(int a[20],int n)
{
	long long sum=0;
	for(int i=1;i<=n;i++)
	{
		sum=sum*10+a[i];
	}
	return sum;
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
				if(Tong(a,n)%x==0)
				{
					cout<<Tong(a,n)<<endl;
					kt=0;
					break;
				}
				Next(a,n);
			}
			if(kt==0)break;
		}
	}
}
