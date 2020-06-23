#include <bits/stdc++.h>
using namespace std;
long long sum_a[1000001];
int res[100000];
int main(){
	ios::sync_with_stdio(false);
	int n, m;
	cin>>n;
	long long a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
		sum_a[i+1] = sum_a[i] + a[i];
	}
	cin>>m;
	long long q[m];
	for(int i=0; i<m; i++){
		cin>>q[i];
	}
	for(int i=0; i<m; i++){
		int l=1, r=n;
		int med = (l+r)/2;
		while(l<=r){
			if(q[i] == sum_a[med]){
				res[i] = med;
				break;
			}
			else if(q[i] < sum_a[med]){
				
			}
			else{
				l = med;
			}
		}
	}
	for(int i=0; i<m; i++){
		cout<<res[i]<<endl;
	}
	return 0;
}