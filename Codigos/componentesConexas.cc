#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define min(a,b) (a<b) ? a : b

int k_segun_n ( int n ) {
	int res = (n * (n-1)) / 2;
	return res;
}

int main () {
	ll n, k;
	cin >> n >> k;
	ll min = n - k;

	cout << min << max << endl;
	return 0;
}