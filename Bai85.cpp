#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		queue<long long> q;
		q.push(9);
		while(!q.empty()){
			long long s = q.front();
			q.pop();
			if(s % n == 0) {
				cout << s << endl;
				break;
			}
			for(int i = 0; i <= 1; i++){
				if(i == 0){
					long long sum = s * 10 + 0;
					q.push(sum);
					
				}
				if(i == 1){
					long long sum = s * 10 + 9;
					q.push(sum);
				}
			}
		}
	}
    return 0;
}

