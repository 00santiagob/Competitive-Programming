#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, ldoor=0, rdoor=0;
	cin>>n;
	int doors[n];
	for (int i=0; i<n; i++){
		cin>>doors[i];
		if(doors[i]==0){
			ldoor++;
		}
		else{
			rdoor++;
		}
	}
	for (int i=0; i<n; i++){
		if(doors[i]==0){
			ldoor--;
			if(ldoor==0){
				cout<<i+1<<endl;
				return 0;
			}
		}
		else{
			rdoor--;
			if(rdoor==0){
				cout<<i+1<<endl;
				return 0;
			}
		}
	}
	return 0;
}