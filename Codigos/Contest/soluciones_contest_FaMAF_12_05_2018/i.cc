#include <bits/stdc++.h>
using namespace std;

map<string,int> w;
int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++) {
		string s;
		cin>>s;
		if(w[s])
			cout<<s<<w[s]<<endl;
		else
			cout<<"OK"<<endl;
		w[s]++;
	}
}
