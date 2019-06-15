#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define Max 10005
int n, m ,u;
int check[10005];
int a[10005][10005];
void BFS(int u,queue<int>qlist){
	qlist.push(u);
	check[u] = 0;
	while(!qlist.empty()){
		int s = qlist.front();
		cout << s << " ";
		qlist.pop();
		for(int t = 1; t <= n; t++){
			if(check[t] == 1 && a[s][t] == 1){
				qlist.push(t);
				check[t] = 0;
			}
		}
	}
	cout << endl;
}
main(){
	int t;
	cin >> t;
	while(t--){
		cin >> n >> m >> u;
		for(int i = 1; i <= n; i++){
			for(int j = 1; j <= n; j++){
				a[i][j] = 0;
			}
		}
		queue<int>q;
		for(int i = 1; i <= n; i++) check[i] = 1;
		int x, y;
		for(int i = 1; i <= m; i++){
			cin >> x >> y;
			a[x][y] = 1;
			a[y][x] = 1;
		}
		BFS(u,q);
	}
    return 0;
}

