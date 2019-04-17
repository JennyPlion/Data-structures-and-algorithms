#include<iostream>
#include<string>
using namespace std;
# define MAX 10000
string L1[MAX];
int n, dem=0,OK=1,k=0;
void Init(void)
{
	L1[0]="0";
	L1[1]="1";
	k=2;
}

void Result(void)
{
	for(int i=0;i<k;i++)
	{
		cout<<L1[i]<<" ";
	}
	cout<<endl;
}

void Generation(void)
{
	string L2[MAX];
	int t=0;
	for(int i=k-1;i>=0;i--,t++)
	{
		L2[i]=L1[t];
		L1[t]="0"+L1[t];
		L2[i]="1"+L2[i];
	}
	
	for(int i=0;i<t;i++)
	{
		L1[k]=L2[i];
		k++;
	}
}


int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int i=1;
		cin>>n;
		Init();
		while(i<n)
		{
			Generation();
			i++;
		}
		 Result();
	}
}
