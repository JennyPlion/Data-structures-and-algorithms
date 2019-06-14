#include<iostream>
#include<bits/stdc++.h>
using namespace std;
long long doinp(int n){
	stack<int>st;
	while(n > 0){
		int i = n % 2;
		n = n / 2;
		st.push(i);
	}
	long long sum = 0;
	while(!st.empty()){
		int i = st.top();
		sum = sum * 10 + i;
		st.pop();
	}
	return sum;
}
main(){
	int t;
	cin >> t;
	int n;
	while(t--){
		cin >> n;
		long long k = doinp(n);
		queue<int> q;
		q.push(1);
		while(!q.empty()){
			long long s = q .front();
			q.pop();
			if(s <= k) cout << s << " ";
			for(int i = 0; i <= 1; i++){
				if(i == 0){
					long long sum = s * 10 + 0;
					if(sum <= k) q.push(sum);
				}
				if(i == 1){
					long long sum = s * 10 + 1;
					if(sum <= k) q.push(sum);
				}
			}
		}
		cout << endl;
	}
    return 0;
}

