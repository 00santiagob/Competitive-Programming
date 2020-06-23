#include <bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	int n, m;
	cin>>n>>m;
	long long a[n];
	long long b[m];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int j=0; j<m; j++){
		cin>>b[j];
	}
	sort(a,a+n);
	int q = m;
	int k = 0;
	while(q--){
		int l=0, r=n-1;
		while(l<=r && k<m){
			int med = (l + r)/2;
			if(a[med]==b[k]){
				cout<<med+1;
				k = k + 1;
				continue;
			}
			else if(a[med]<b[k]){
				l = med + 1;
			}
			else{
				r = med - 1;
			}
		}
		if(r<l){
			cout<<r+1;
		}
	}
	return 0;
}