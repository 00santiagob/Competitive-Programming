#include <iostream>
using namespace std;
int main () {
	ios :: sync_with_stdio (false);
	int i, n, a=0, b=0, c=0, x, y, z;
	cin >> n;
	for (i=0; i<n; i++) {
		cin >> x >> y >> z;
		a=a+x; b=b+y; c=c+z;
	}	
	if (a+b+c == 0) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}