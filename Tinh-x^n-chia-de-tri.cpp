#include<iostream>
using namespace std;
int power(int x, unsigned int n)
{
	if(n==0)return 1;
	else if(n%2==0)return power(x,n/2)*power(x,n/2);
	else return x*power(x,n/2)*power(x,n/2);
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int x,n;
	cin>>x>>n;
	cout<<power(x,n);
	}
}
