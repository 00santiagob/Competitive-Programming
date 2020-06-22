#include <bits/stdc++.h>
using namespace std;

set<int> g[200005]; // grafo cuyo complemento quiero recorrer (lista de adyacencia)
set<int> rem; // nodos que falta visitar
vector<int> r; // resultado
int n,m;

int dfs(int x){ // recorre el complemento de g
	int r = 1; // devuelve la cantidad de nodos visitados
	vector<int> tmp; // vector con los nodos que visitare desde x
	for(int y: rem)
		if(!g[x].count(y))
			tmp.push_back(y);
	for(int y: tmp) // marco los nodos como visitados
		rem.erase(y);
	for(int y: tmp) // recorro los nodos, sumando a r
		r += dfs(y);
	return r;
}

int main(){
	scanf("%d%d",&n,&m); // leer el grafo
	for(int i=0; i<m; ++i){
		int x,y;
		scanf("%d%d",&x,&y);
		g[x-1].insert(y-1); // indexo de 0
		g[y-1].insert(x-1);
	}
	for(int i=0; i<n; ++i) // inicializo rem
		rem.insert(i);
	for(int i=0; i<n; ++i){ // dfs
		if(rem.count(i)){
			rem.erase(i);
			r.push_back(dfs(i));
		}
	}
	sort(r.begin(),r.end());
	printf("%d\n",(int)r.size());
	for(int i=0; i<r.size(); ++i)
		printf("%d%c",r[i]," \n"[i==r.size()-1]);
	return 0;
}
