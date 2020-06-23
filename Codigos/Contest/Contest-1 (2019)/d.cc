#include <bits/stdc++.h>
using namespace std;

long long sump1[100001];
long long sump2[100001];
long long res[100001];

int main(){
	int n, m;
	cin>>n;
	long long cost[n];
	for(int i=1; i<=n; i++){
		cin>>cost[i-1];
		sump1[i] = sump1[i-1] + cost[i-1];
	}
	sort(cost, cost+n);
	for(int i=1; i<=n; i++){
		sump2[i] = sump2[i-1] + cost[i-1];
	}
	cin>>m;
	int type, l, r;
	for(int i=0; i<m; i++){
		cin>>type>>l>>r;
		if(type == 1){
			res[i] = sump1[r]-sump1[l-1];
		}
		else{
			res[i] = sump2[r]-sump2[l-1];
		}
	}
	for(int i=0; i<m; i++){
		cout<<res[i]<<endl;
	}
	return 0;
}