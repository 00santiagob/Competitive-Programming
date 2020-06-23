#include <bits/stdc++.h>
using namespace std;
int main(){
	int matrix[5][5];
	int pos_i, pos_j, res;
	for(int i=0; i<5; i++){
		for(int j=0; j<5; j++){
			cin>>matrix[i][j];
			if(matrix[i][j]){
				pos_i = i;
				pos_j = j;
			}
		}
	}
	res = 0;
	if(pos_i%2==0){
		if(pos_i!=2){
			res = res + 2;
		}
	}
	else{
		res = res + 1;
	}
	if(pos_j%2==0){
		if(pos_j!=2){
			res = res + 2;
		}
	}
	else{
		res = res + 1;
	}
	cout<<res<<endl;
	return 0;
}