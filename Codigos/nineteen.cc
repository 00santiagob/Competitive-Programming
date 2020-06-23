#include <bits/stdc++.h>
using namespace std;
int ocurs_c(string s, int length, char c){
	int res = 0;
	for(int i=0; i<length; i++){
		if(s[i]==c){
			res++;
		}
	}
	return res;
}
int main(){
	string s;
	cin>>s;
	int length = (int)s.size();
	int res = 0;
	int n = ocurs_c(s,length,'n');
	int i = ocurs_c(s,length,'i');
	int e = ocurs_c(s,length,'e');
	int t = ocurs_c(s,length,'t');
	if(i>=1 && t>=1 && n>=3 && e>=3){
		if(i<=t){
			if(e/3>=i){
				if(n>=(i*2)+1){
					res = i;
				}
				else{
					res = (n-1)/2;
				}
			}
			else{
				if(n>=((e/3)*2)+1){
					res = (e/3);
				}
				else{
					res = (n-1)/2;
				}
			}
		}
		else{
			if(e/3>=t){
				if(n>=(t*2)+1){
					res = t;
				}
				else{
					res = (n-1)/2;
				}
			}
			else{
				if(n>=((e/3)*2)+1){
					res = e/3;
				}
				else{
					res = (n-1)/2;
				}
			}
		}
	}
	cout<<res<<endl;
	return 0;
}