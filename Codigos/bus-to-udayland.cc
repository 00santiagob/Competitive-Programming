#include <bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	char bus[n][5];
	bool listo = false;
	int fila;
	int sitC, sitZS; 
	for(int i=0; i<n; i++){
		for(int j=0; j<5; j++){
			cin>>bus[i][j];
		}
		if(bus[i][0]==bus[i][1] && bus[i][0]=='O' && !listo){
			listo = true;
			fila = i;
			sitC = 0;
			sitZS = 1;
		}
		else if(bus[i][3]==bus[i][4] && bus[i][3]=='O' && !listo){
			listo = true;
			fila = i;
			sitC = 3;
			sitZS = 4;
		}

	}
	if(listo){
		bus[fila][sitC] = '+';
		bus[fila][sitZS] = '+';
		cout<<"YES"<<endl;
		for(int i=0; i<n; i++){
			for(int j=0; j<5; j++){
				cout<<bus[i][j];
			}
			cout<<endl;
		}
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}