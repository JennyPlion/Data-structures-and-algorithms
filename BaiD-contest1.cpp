#include<iostream>
using namespace std;
int n,a[80],OK=1;
int Next()
{
    int j=n-2;
    while(j>0&&a[j]>a[j+1])j--;
    if(j>0)
    {
    	int k=n;
    	while(a[j]>a[k])k--;
    	int t=a[j];
    	a[j]=a[k];
    	a[k]=t;
    	int r=j+1,s=n-1;
    	while(r<=s)
    	{
    		t==a[r];
    		a[r]=a[s];
    		a[s]=t;
    		r++;
    		s--;
					}
					return true;
				}
				return false;
}

int Result()
{
	for(int i=0;i<n;i++)
		{
			cout<<a[i];
		}
}

int Test()
{
	string s;
	cin>>s;
	n=s.length();
	for(int i=0;i<n;i++)
	{
		a[i]=s[i]-'0';
	}
	if(Next())Result();
	else cout<<" BIGGEST";
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int stt;
		cin>>stt;
		cout<<stt<<" ";
		Test();
		cout<<endl;
	}
	return 0;
}

