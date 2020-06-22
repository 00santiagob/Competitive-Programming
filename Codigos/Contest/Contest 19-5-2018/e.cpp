#include <bits/stdc++.h>
using namespace std;

int n,x[60005],v[60005];

bool can(double t){ // pueden encontrarse antes del tiempo t?
	double a=-1e100,b=1e100; // interseccion de intervalos
	for(int i=0; i<n; ++i){
		a = max(a, x[i]-v[i]*t);
		b = min(b, x[i]+v[i]*t);
	}
	return a < b; // la interseccion no es vacia
}

int main(){
	scanf("%d", &n);
	for(int i=0; i<n; ++i)
		scanf("%d", x+i);
	for(int i=0; i<n; ++i)
		scanf("%d", v+i);
	double s = 0, e = 1e10; // busqueda binaria
	for(int i=0; i<100; ++i){ // cantidad de iteraciones fija
		double m = (s+e)/2;
		if(can(m))
			e = m; // pueden encontrarse antes de m
		else
			s = m; // necesito mas tiempo
	}
	printf("%.12lf\n",s);
	return 0;
}
