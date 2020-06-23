#include <bits/stdc++.h>
using namespace std;

int suma(int a[], int n){
	int res = 0;
	for(int i=0; i<n; i++){
		res = res + a[i];
	}
	return res;
}

double promedio(int a[], int n){
	double res;
	int sum = suma(a, n);
	res = (double) sum/n;
	return res;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	cout<<setprecision(15)<<promedio(a,n)<<endl;
	return 0;
}
