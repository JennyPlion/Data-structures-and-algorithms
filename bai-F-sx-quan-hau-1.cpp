#include<iostream>
#include<iomanip>
using namespace std;
int a[100],n,dem=0;
bool COT[100], DCXUOI[100],DCNGUOC[100];
void Init()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		COT[i]=true;
	}
	for(int i=1;i<2*n;i++)
	{
		DCXUOI[i]=true;
		DCNGUOC[i]=true;
	}
}


void Try(int i)
{
	for(int j=1;j<=n;j++)
	{
		if(COT[j]&&DCXUOI[i-j+n]&&DCNGUOC[i+j-1])
		{
			a[i]=j;
		 COT[j]=false;
		 DCXUOI[i-j+n]=false;
		 DCNGUOC[i+j-1]=false;
		 if(i==n){
		 	dem++;
			}	
		 else Try(i+1);
		 COT[j]=true;
		 DCXUOI[i-j+n]=true;
		 DCNGUOC[i+j-1]=true;
		}
		
	}
	
}

int main()
{
	Init();
	Try(1);
	cout<<dem;
	return 0;
}
