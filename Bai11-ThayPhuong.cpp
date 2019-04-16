#include<iostream>
using namespace std;
int n,k,a[100],OK=1;
int Init()
{
	cin>>n>>k;
	for(int i=1;i<=k;i++)
	{
		a[i]=i;
	}
}

int Next()
{
	int i=k;
	while(i>0&&a[i]==n-k+i)i--;
	if(i>0)
	{
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++)
		{
			a[j]=a[i]+j-i;
		}
	}else OK=0;
}

int Result()
{
	for(int i=1;i<=k;i++)
	{
		cout<<a[i]<<" ";
	}cout<<endl;
}

int main()
{
	Init();
	while(OK)
	{
		Result();
		Next();
	}
}


