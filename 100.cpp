#include<iostream>
using namespace std;
int chuaxet[1000],a[1001][1001];
int n,m,u;
void BFS(int u)
{
	int Queue[100],low=1,high=1;
	Queue[low]=u;
	chuaxet[u]=0;
	while(low<=high)
	{
		u=Queue[low];
		low=low+1;
		cout<<u<<" ";
		for(int v=1;v<=n;v++)
		{
			if(a[u][v]==1&&chuaxet[v]==1)
			{
				high=high+1;
				Queue[high]=v;
				chuaxet[v]=0;
			}
		}
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
		
		BFS(u);
	}
	return 0;
}
