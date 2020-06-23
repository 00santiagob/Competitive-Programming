#include <bits/stdc++.h>
using namespace std;
#define min(a,b) (a<=b ? a : b)

int main(){
	int n, k;
	cin>>n>>k;
	int letters = min(n,26);
	char c = 'a';
	for(int i=0; i<n; i++){
		cout<<c;
		c = c + 1;
	}
	return 0;
}