#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, x, y, z;
	int v[3];
	v[0]=0; v[1]=0; v[2]=0;
	cin>>n;
	for(int i=0; i<n; i++){
		cin>>x>>y>>z;
		v[0] = v[0]+x;
		v[1] = v[1]+y;
		v[2] = v[2]+z;
	}
	if(v[0]==0 && v[1]==0 && v[2]==0){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}