#include <iostream>
using namespace std;
int main () {
	ios :: sync_with_stdio (false);
	int i, n, Petya, Vasya, Tonya, result = 0;
	cin >> n;
	for (i=0; i<n; i++) {
		cin >> Petya >> Vasya >> Tonya;
		if (Petya+Vasya+Tonya >= 2)
			result++;
	}
	cout << result << endl;
}