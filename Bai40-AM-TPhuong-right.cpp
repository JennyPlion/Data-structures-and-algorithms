#include<iostream>
using namespace std;
int n,k,x[100],OK=1,count=0;
void Next()
{
	int i=n;
	while(i>0&&x[i])
	{
		x[i]=0;
		i--;
	}
	if(i>0)x[i]=1;
	else OK=0;
}

int Check()
{
	int s=0,dem0=0;
	for(int i=1;i<=n;i++)
	{
		if(x[i]==0)
		{
			dem0++;
			if(dem0>=k)s++;
		}
		else dem0=0;
	}
	if(s>=1&&s<=(n-1))return 1;
	else return 0;
}

int Result()
{
	if(Check()==1)
		{
			count++;
		}
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		OK=1;
		for(int i=1;i<=n;i++)
		{
			x[i]=0;
		}
		while(OK)
		{
			Result();
				Next();
		}
		cout<<count;
	}
}
