#include<iostream>
using namespace std;
int a[100][100],b[100];
int Cot[100],Xuoi[100],Nguoc[100];
int giatri;
void Init()
{
	giatri=0;
	for(int i=1;i<=8;i++)
	{
		for(int j=1;j<=8;j++)
		{
			cin>>a[i][j];
		}
	}
	
	for(int i=1;i<=8;i++)
	{
		Cot[i]=1;
	}
	for(int i=1;i<2*8;i++)
	{
		Xuoi[i]=1;
		Nguoc[i]=1;
	}
}

void Try(int i)
{
	for(int j=1;j<=8;j++)
	{
		if(Cot[j]==1&&Xuoi[i-j+8]==1&&Nguoc[i+j-1]==1)
		{
			b[i]=j;
			Cot[j]=0;
			Xuoi[i-j+8]=0;
			Nguoc[i+j-1]=0;
			if(i==8)
			{
				int diem=0;
				for(int k=1;k<=8;k++)
				{
					diem+=a[k][b[k]];
				}
				if(diem>giatri)giatri=diem;
			}
			Try(i+1);
			Cot[j]=1;
			Xuoi[i-j+8]=1;
			Nguoc[i+j-1]=1;
		}
	}
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		Init();
		Try(1);
		cout<<giatri;
	}
}
