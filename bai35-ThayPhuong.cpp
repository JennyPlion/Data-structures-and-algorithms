#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int TrailingZeroes(int n)
{
	int count=0;
	while(n>0)
	{
		n/=5;
		count+=n;
	}
	return count;//count la tong so 0 co trong so n!
}

void BinarySearch(int n)
{
	int low=0;
	int high=1e6;
	while(low<high)
	{
		int mid=(low+high)/2;
		int dem=TrailingZeroes(mid);
		if(dem<n)low=mid+1;
		else high=mid;
	}
	
	vector<int> result;
	while(TrailingZeroes(low)==n)
	{
		result.push_back(low);
		low++;
	}
	for(int i=0;i<result.size();i++)cout<<result[i]<<" "; cout<<endl;
}

int main()
{
	int t,n;
	cin>>t;
	while(t--)
	{
		cin>>n;
		BinarySearch(n);
	}
}
