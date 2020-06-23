#include <bits/stdc++.h>
using namespace std;
int aux[100];
int main(){
	int n, res=0;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int k=0; k<n; k++){
		for(int j=k; j<n; j++){
			if(a[k] == a[j]){
				aux[k]++;
			}
		}
	}
	sort(aux,aux+n);
	res = aux[n-1];
	cout<<res<<endl;
	return 0;
}