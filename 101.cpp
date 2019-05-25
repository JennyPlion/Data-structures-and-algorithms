#include<iostream>
using namespace std;
int chuaxet[1001];
int a[1001][1001];
int n,m,u;
void DFS(int u)
{
	cout<<u<<" ";
	chuaxet[u]=0;
	for(int v=1;v<=n;v++)
	{
		if(chuaxet[v]==1&&a[u][v]==1)DFS(v);
	}
	
}

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		cin>>n>>m>>u;
		for(int i=1;i<=n;i++)
		{
			chuaxet[i]=1;
			for(int j=1;j<=n;j++)
			{
				a[i][j]=0;
			}
		}
		
		for(int i=1;i<=m;i++)
		{
			int x,y;
			cin>>x>>y;
			a[x][y]=1;
			a[y][x]=1;
		}
		DFS(u);
		
		
	}
	return 0;
}
