#include <bits/stdc++.h> 
using namespace std;
int a[100]; 
int main () {
	ios::sync_with_stdio(false); 
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(int i=1; i<n; i++){
		if(a[i-1]<a[i]){
		cout<<a[i]<<endl;
		return 0;
		}
	}
	cout<<"NO"<<endl;;
	return 0; 
}