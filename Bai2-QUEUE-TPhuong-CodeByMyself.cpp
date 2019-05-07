#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		queue<long long> q;
		q.push(1);
		while(n--)
		{
			long long s=q.front();
			q.pop();
			cout<<s<<" ";
			for(int i=0;i<=1;i++)
			{
				long long sum=s*10+i;
				q.push(sum);
			}
			
		}
	}
}
