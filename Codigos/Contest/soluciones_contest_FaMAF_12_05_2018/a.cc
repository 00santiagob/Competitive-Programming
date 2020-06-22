#include <bits/stdc++.h>
using namespace std;

void pvec(vector<int> x){ // imprime un vector (tamano y elementos)
	printf("%d",(int)x.size());
	for(int k:x)
		printf(" %d",k);
	puts("");
}

vector<int> rneg,rpos,rzero; // resultado
vector<int> neg; // vector temporal para numeros negativos
int n;

int main(){
	scanf("%d",&n);
	for(int i=0; i<n; ++i){
		int x;
		scanf("%d",&x);
		if(x<0) // guardo los negativos en neg
			neg.push_back(x);
		else if(x>0) // positivo lo mando siempre al grupo pos
			rpos.push_back(x);
		else // 0 lo mando siempre al grupo zero
			rzero.push_back(x);
	}
	if(!rpos.size()){
		// si no tengo positivos, tengo que usar dos negativos
		assert(neg.size()>=2);
		rpos.push_back(neg.back());neg.pop_back();
		rpos.push_back(neg.back());neg.pop_back();
	}
	assert(!neg.empty()); // necesito un negativo para el grupo neg
	rneg.push_back(neg.back());neg.pop_back();
	for(int x: neg) // los negativos que sobran los mando al zero
		rzero.push_back(x);
	assert(rneg.size() && rpos.size() && rzero.size());
	pvec(rneg);pvec(rpos);pvec(rzero);
	return 0;
}
