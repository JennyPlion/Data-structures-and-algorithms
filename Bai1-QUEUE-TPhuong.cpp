#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main(){
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	string s;
	int k;
	while(t--){
		cin >> k;
		map<char,int> p;
		cin >> s;
		for(int i = 0; i < s.length(); i++){
			p[s[i]]++;
		}
		priority_queue<int, vector<int>, less<int> > q;
		map<char, int> ::iterator it;
	    for(it = p.begin(); it != p.end(); ++it){
			q.push(it->second);
		}
		while(k != 0){
			int s = q.top();
			s--;
			k--;
			q.pop();
			q.push(s);
		}
		long long sum = 0;
		while(q.size() != 0){
			int s = q.top();
			sum += s * s;
			q.pop();
		}
		cout << sum << endl;
	}
    return 0;
}

