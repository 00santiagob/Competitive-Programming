#include <bits/stdc++.h>
using namespace std;
bool isPrime(int x){
	bool keyPrime = true;
	int div = 2;
	int upto = (int)floor(sqrt(x));
	while(div<=upto && keyPrime){
		if(x%div == 0) {
			keyPrime = false;
		}
		else {
			div++;
		}
	}
	return keyPrime;
}
int main(){
	int n,m;
	cin>>n>>m;
	if(n>=m){
		cout<<"NO"<<endl;
		return 0;
	}
	bool nextPrime = true;
	if(!isPrime(m)){
		nextPrime = false;
	}
	int aux = n+1;
	while(aux<m && nextPrime){
		if(isPrime(aux)){
			nextPrime = false;
		}
		else {
			aux++;
		}
	}
	if(nextPrime){
		cout<<"YES"<<endl;
	}
	else {
		cout<<"NO"<<endl;
	}
	return 0;
}