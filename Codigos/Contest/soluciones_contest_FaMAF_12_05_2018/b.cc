#include <bits/stdc++.h>
using namespace std;
int n,m,b,mod;
int a[512];
int f[512][512]; // dp
                 //primera dimension: cantidad de lineas
                 //segunda dimension: cantidad de bugs

int main(){
	scanf("%d%d%d%d",&n,&m,&b,&mod);
	for(int i=0; i<n; ++i)
		scanf("%d",a+i);
	f[0][0]=1; // caso base: si no tengo lineas, no tengo bugs
	for(int i=0; i<n; ++i)
		for(int j=1; j<=m; ++j)
			for(int k=0; k<=b; ++k)
				if(a[i]<=k)
					f[j][k]=(f[j][k] + f[j-1][k-a[i]])%mod;
	int r=0;
	for(int k=0; k<=b; ++k)
		r=(r+f[m][k])%mod;
	printf("%d\n",r);
	return 0;
}
