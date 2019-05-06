#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int CountOfBinaryNumberLessThanN(int N)
{
	queue<int> q;
	q.push(1);
	int count=0;
	int t;
	while(!q.empty())
	{
		t=q.front();
		q.pop();
		if(t<=N)
		{
			count++;
			q.push(t*10);
			q.push(t*10+1);
		//	cout<<t<<" ";	
		}
	}
	return count;
}

int main()
{
	int t,N;
	cin>>t;
	while(t--)
	{
		cin>>N;
		cout<<CountOfBinaryNumberLessThanN(N);
		cout<<endl;
	}
}
