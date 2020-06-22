#include <bits/stdc++.h>
using namespace std;

#define MAXN 1000005

char s[MAXN];
int a,b,n;
long long v0[MAXN]; // valor de los prefijos mod a
long long v1[MAXN]; // valor de los sufijos mod b
// (long long porque int haria overflow al multiplicar)

int main(){
	scanf("%s%d%d",s,&a,&b);
	n=strlen(s);
	// calculo valor de los prefijos mod a
	v0[0] = 0;
	for(int i=0; i<n; ++i)
		v0[i+1] = (v0[i]*10 + s[i]-'0') % a;
	// calculo valor de los sufijos mod b
	long long p = 1; // potencia de 10 correspondiente
	v1[n] = 0;
	for(int i=n-1; i>=0; --i){
		v1[i] = (v1[i+1] + p*(s[i]-'0')) % b;
		p = (p*10) % b;
	}
	// busco posicion tal que hasta esa posicion sea 0 mod a
	// y desde esa posicion sea 0 mod b (y ademas el segundo no empiece con 0)
	for(int i=1; i<n; ++i){
		if(v0[i] == 0 && v1[i] == 0 && s[i] != '0'){
			puts("YES");
			for(int j=0; j<i; ++j)
				putchar(s[j]);
			puts("");
			for(int j=i; j<n; ++j)
				putchar(s[j]);
			puts("");
			return 0;
		}
	}
	puts("NO"); // no encontre nada
	return 0;
}
