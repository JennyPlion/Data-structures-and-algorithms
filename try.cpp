#include<iostream>
using namespace std;
int n,k,a[100],OK=1;
int Next()
{
	int i=n;
	while(i>0&&a[i]==1)
	{
		a[i]=0;
		i--;
	}
	if(i>0)a[i]=1;
	else OK=0;
}

int Result()
{
	int dem1=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==1)dem1++;
	}
	if(dem1==k){
		 for(int i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
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
		a[i]=0;
	}
	OK=1;
		while(OK)
		{
			Result();
			Next();
		}
		}
		return 0;
	
}

