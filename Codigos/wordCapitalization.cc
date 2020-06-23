#include <bits/stdc++.h>
using namespace std;
int main(){
	string word;
	cin>>word;
	int length = word.size();
	string aux = "";
	aux = aux + (char)toupper(word[0]);
	for(int i=1; i<length; i++){
		aux = aux + word[i];
	}
	cout<<aux<<endl;
	return 0;
}