#include<iostream>
using namespace std;
bool check=0;
int kt=0;
int n,k, a[100];
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
	}
	else kt=0;
}


main()
{
	int sotest;
	cin>>sotest;
	while(sotest--)
	{
		check=0;
		cin>>n>>k;
		for(int i=1;i<=k;i++)
		{
			cin>>a[i];
		}
		Next();
		if(check==1)cout<<-1<<endl;
		else{
			for(int i=1;i<=k;i++)
			{
				cout<<a[i]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
}
