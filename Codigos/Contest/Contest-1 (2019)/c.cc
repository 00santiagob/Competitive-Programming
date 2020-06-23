#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, f, x;
	cin>>n>>m;
	bool bulbs[m];
	for(int i=0; i<m; i++){
		bulbs[i] = false;
	}
	for(int i=0; i<n; i++){
		cin>>f;
		for(int j=0; j<f; j++){
			cin>>x;
			bulbs[x-1] = true;
		}
	}

	for(int t=0; t<m; t++){
		if(bulbs[t] != true){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}