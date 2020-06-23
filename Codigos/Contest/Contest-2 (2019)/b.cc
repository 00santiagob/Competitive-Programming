#include <bits/stdc++.h> 
using namespace std;
int xi[100000];
long long mi[100000];
int res[100000];
int main(){
	ios::sync_with_stdio(false); 
	int n;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>xi[i];
	}
	int q;
	cin>>q;
	for(int i=0; i<q; i++){
		cin>>mi[i];
	}
	sort(xi, xi+n);
	
	while(q--){
		int l=1, r=n;
		int med = (l+r)/2;
		while(l<r){
			/*if(mi[i]==xi[med-1]){
				res[i] = med;
				break;
			}
			else if(mi[i]<xi[med-1]){
				r = med-1;
			}
			else{
				l = med+1;
			}*/
		}
	}
	for(int i=0; i<q; i++){
		cout<<res[i]<<endl;
	}
	return 0; 
}