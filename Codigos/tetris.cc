#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, k, res;
	cin >> n >> m;
	res = m;
	int squares[n];
	for(int i=0; i<n; i++){
		squares[i] = 0;
	}
	for(int i=0; i<m; i++){
		cin>>k;
		squares[k-1]++;
	}
	for(int i=0; i<n; i++){
		if(res>squares[i]){
			res = squares[i];
		}
	}
	cout<<res<<endl;
	return 0;	
}