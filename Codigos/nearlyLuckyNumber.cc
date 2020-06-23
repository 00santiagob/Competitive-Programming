#include <bits/stdc++.h>
using namespace std;
bool isLucky(string ns, int length){
	for(int i=0; i<length; i++){
		if(ns[i]!='4' && ns[i]!='7'){
			return false;
		}
	}
	return true;
}

int main(){
	string ns;
	cin>>ns;
	int length = ns.size();
	int aux = 0;
	for(int i=0; i<length; i++){
		if(ns[i]=='4' || ns[i]=='7'){
			aux++;
		}
	}
	ns = to_string(aux);
	length = ns.size(); 
	if(isLucky(ns, length)){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}