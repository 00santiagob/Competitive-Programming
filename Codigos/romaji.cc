#include <bits/stdc++.h>
using namespace std;
bool is_vowel(string s, int i){
	return (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u');
}
int main(){
	ios::sync_with_stdio(false);
	string s;
	int consonante = 1;
	cin>>s;
	int length = (int)s.size();
	for(int i=0; i<length; i++){
		if(i==length-1){
			if(!is_vowel(s, i) && s[i]=='n' && consonante!=0){
				cout<<"YES"<<endl;
			}
			else if(is_vowel(s, i)){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
		else{
			if(!is_vowel(s, i)){
				if(s[i]!='n' && consonante!=0){
					consonante = consonante - 1;
				}
				else if(consonante==0){
					cout<<"NO"<<endl;
					return 0;
				}
			}
			else{
				consonante = 1;
			}
		}
	}
	return 0;
}