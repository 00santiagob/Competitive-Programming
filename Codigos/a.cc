#include <bits/stdc++.h>
using namespace std;
bool is_diversa(string p, int k){
	bool adyasente;
	int length = (int)p.size();
	for(int i=0; i<length; i++){
		adyasente = false;
		if(length>1){
			int aux = (int)p[i];
			for(int j=0; j<length; j++){
				int aux2 = (int)p[j];
				if(j != i){
					if(aux == aux2){
					return false;
					}
					else{
						if(aux==(aux2+1) || aux==(aux2-1)){
							adyasente = true;
						}
					}
				}
			}
			if(!adyasente){
				return false;

			}
		}
	}
	return true;
}
int main(){
	int n;
	cin>>n;
	string s[n];
	for(int i=0; i<n; i++){
		string cadena;
		cin>>cadena;
		s[i] = cadena;
	}

	for(int i=0; i<n; i++){
		string p = s[i];
		if(is_diversa(p, i)){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}