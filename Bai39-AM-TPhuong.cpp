#include<iostream>
using namespace std;
int n,k,x[100],	OK=1;
void Next()
{
	int i=n;
	while(i>0&&x[i]==1)
	{
		x[i]=0;
		i--;
	}
	if(i>0)x[i]=1;
	else OK=0;
}

int Test()
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

void Result()
{
	if(Test()==0)
	{
		for(int i=1;i<=n;i++)
		{
			cout<<x[i]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		for(int i=1;i<=n;i++)
		{
			x[i]=0;
		}
		OK=1;
		while(OK)
		{
			Result();
			Next();
		}
	}
}
