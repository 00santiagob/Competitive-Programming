#include <bits/stdc++.h>
using namespace std;
int main(){
	int year;
	cin>>year;
	string y;
	for(int i=year; i<9999; i++){
		y = to_string(i+1);
		if(y[0]!=y[1] && y[0]!=y[2] && y[0]!=y[3] && y[1]!=y[2] && y[1]!=y[3] && y[2]!=y[3]){
			cout<<i+1<<endl;
			break;
		}
		else{
			continue;
		}
	}
	return 0;
}