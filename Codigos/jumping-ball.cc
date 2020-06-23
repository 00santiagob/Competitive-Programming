#include <bits/stdc++.h>
using namespace std;

int main(){
	int n;
	cin>>n;
	string bumpers;
	cin>>bumpers;
	int max_pos;
	for(int i=0; i>=0 && i<n;){
		if(bumpers[i]=='<'){
			max_pos = (max_pos > i ? max_pos : i);
			i = i - 1;
		}
	}
	return 0;
}