#include<iostream>
using namespace std;
int n,k,a[16],OK=1,dem=0;
void Next()
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
	int dem=0;
	for(int i=1;i<=n;i++)
	{
		if(a[i]==1)dem++;
	}
	if(dem==k)
	{
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
 	OK=1;
 	for(int i=1;i<=n;i++)
	{
		a[i]=0;
	}
	while(OK)
	{
		Test();
		Next();
	}
	}
	return 0;
}
