#include <bits/stdc++.h>
#define fst first
#define snd second
#define fore(i,a,n) for(int i=a;i<n;i++)
#define pb push_back
#define mp make_pair
using namespace std;
typedef pair<int,int> ii;
typedef long long ll;

int n,ans,a[200500];
vector<int> ians; // vector de indices
map<int,int> m;
int main() {
	cin>>n;
	fore(i,0,n) {
		cin>>a[i];
		// Actualizamos el valor del segmento que termina en a[i].
		m[a[i]]=max(m[a[i]],m[a[i]-1]+1);
		// Actualizamos el valor del segmento maximal.
		ans=max(ans,m[a[i]]);
	}
	for(int i=n-1;i>=0;i--) {
		int current=a[i];
		if(m[a[i]]==ans) {
			for(int j=i;j>=0&&current;j--) if(current==a[j]) {
				current--;
				ians.pb(j);
			}
			break;
		}
	}
	reverse(ians.begin(),ians.end());
	cout<<ans<<endl;
	for(int i:ians)cout<<i+1<<" "; cout<<endl;
	
}
