#include<iostream>
using namespace std;
int n, a[100][100];
int Init()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		b[n][i]=a[i];
	}
}

int Test()
{
	for(int i=n;i>=1;i--)
	{
		for(int j=1;j<=n;j++)
		{
			b[i][j]=b[i-1][j]+b[i-1][j+1];
		}
	}
}

int Result()
{
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
}

int main()
{
	Init();
	Test();
	Result();
}

