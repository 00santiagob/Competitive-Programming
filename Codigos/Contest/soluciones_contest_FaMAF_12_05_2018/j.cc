#include <bits/stdc++.h>
using namespace std;

char s[100005];
int n,m;
int sum[100005]; // suma parcial: cuantas posiciones hay hasta i que contienen una repeticion

int main(){
	scanf("%s",s);
	n=strlen(s);
	for(int i=0; i<n; ++i){ // inicializo suma parcial
		sum[i+1] = sum[i];
		if(s[i] == s[i+1])
			sum[i+1]++;
	}
	scanf("%d",&m);
	for(int i=0; i<m; ++i){
		int l,r;
		scanf("%d%d",&l,&r);
		printf("%d\n", sum[r-1]-sum[l-1]); // input indexa de 1, yo de 0
	}
	return 0;
}
