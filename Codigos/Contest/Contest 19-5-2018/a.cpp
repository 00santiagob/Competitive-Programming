#include <bits/stdc++.h>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	long long n,k;
	cin>>n>>k;
	long long highest_bit = 63-__builtin_clzll(n);
	if (k>1) cout<<((1ll<<highest_bit+1)-1)<<endl;
	else cout<<n<<endl;
}
