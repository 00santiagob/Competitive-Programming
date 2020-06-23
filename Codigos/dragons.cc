#include <bits/stdc++.h>
using namespace std;
int menor(int x[], int n){
	int pos, aux = 10000;
	for(int i=0; i<n; i++){
		if(aux>=x[i] && x[i]>=1){
			aux = x[i];
			pos = i;
		}
	}
	return pos;
}
int main(){
	int s, n;
	cin>>s>>n;
	int x[n], y[n];
	for(int i=0; i<n; i++){
		cin>>x[i]>>y[i];
	}
	for(int i=0; i<n; i++){
		int pos = menor(x,n);
		if(s<=x[pos]){
			cout<<"NO"<<endl;
			return 0;
		}
		else{
			s = s + y[pos];
			x[pos] = 0;
		}
	}
	cout<<"YES"<<endl;
	return 0;
}