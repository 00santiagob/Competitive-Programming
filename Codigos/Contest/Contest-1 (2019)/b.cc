#include <bits/stdc++.h>
using namespace std; 
int main(){
	int n,res=0;
	cin>>n;
	string poly[n];
	for(int i=0; i<n; i++){
		cin>>poly[i];
		if(poly[i] == "Tetrahedron"){
			res = res + 4;
		}
		else if(poly[i] == "Cube"){
			res = res + 6;
		}
		else if(poly[i] == "Octahedron"){
			res = res + 8;
		}
		else if(poly[i] == "Dodecahedron"){
			res = res + 12;
		}
		else{
			res = res + 20;
		}
	}
	cout<<res<<endl;
	return 0;
}