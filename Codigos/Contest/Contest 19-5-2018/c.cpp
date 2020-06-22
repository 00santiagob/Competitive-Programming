#include <bits/stdc++.h>
using namespace std;

const int N=2e6+1;
bool prize[N];
int main() {
	ios::sync_with_stdio(false);
	int tmp,n,visited=0;
	cin >> n;
	for(int i=0; i<n; i++) {
		cin >> tmp;
		prize[tmp]=1;
	}
	int l=1,r=1e6;
	for(int i = 1; i < 1e6; i++) {
		if (prize[l+i])visited++;
		if (prize[r-i])visited++;
		if (visited>=n) {
			cout<<i<<endl;
			return 0;
		}
	}
	cout<<"UNEXPECTED ERROR"<<endl;
}
