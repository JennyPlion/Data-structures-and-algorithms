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

int Test()
{
	int s=0,dem=0;
	for(int i=1;i<=n;i++)
	{
		
		if(a[i]==1)
		{
			dem++;
			if(dem>=k)s++;
		}
		else dem=0;
	} 
		if(s==1)return 1;
		else return 0;
		
	}


int Result()
{
if(Test()==1)
	{
		for(int i=1;i<=n;i++)
		{
			if(a[i]==1)cout<<"A";
			else cout<<"B";
		}
		cout<<endl;
	}
	
	
}

int main()
{

		cin>>n>>k;
		
		for(int i=1;i<=n;i++)
	{
		a[i]=0;
	}
	int tong=0;
	while(OK)
	{
		if(Test()==1)
		{
			tong++;
		}
		Next();
	}
	OK=1;
	cout<<tong<<endl;
	while(OK)
	{
		Result();
		Next();
	}
	
	return 0;
}
