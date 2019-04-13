#include<iostream>
using namespace std;
int n,k,s,a[100],OK=1;
int Next()
{
	int i=k;
	while(i>0&&a[i]>=n-k+i)i--;//Phải lớn hơn hoặc bằng chứ ko phải bằng vì có bộ test n=3 và k=4, thì k>n nên nếu để dấu bằng sẽ ko in ra gì cả.
	if(i>0)
	{
		a[i]=a[i]+1;
		for(int j=i+1;j<=k;j++)
		{
			a[j]=a[i]+j-i;
		}
	}
	else OK=0;
}

int Check()
{
	int tong=0;
	for(int i=1;i<=k;i++)
	{
		tong=tong+a[i];
	}
	return tong;
}

int main()
{
	
	while(1)
	{
		cin>>n>>k>>s;
		int dem=0;//đếm phải nằm trong vòng while nếu không sẽ in sai kết quả
		if(n==0&&k==0&&s==0)break;
		else{
			OK=1;
			for(int i=1;i<=k;i++)
	{
		a[i]=i;
	}
	while(OK){
		if(Check()==s)dem++;
		Next();
	}
		
	}
	cout<<dem<<endl;
		}
		
return 0;
}
