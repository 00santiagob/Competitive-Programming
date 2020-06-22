#include <iostream>
#include <vector>
using namespace std;

int m, res;
bool visited[100000], cat[100000];
vector <int> a[100000];

void dfs(int pos, int am){
  visited[pos] = true;
  if(!cat[pos]){
    am = 0;
  }
  else{
    am++;
    if(am > m){
      return;
    }
  }
  bool leaf = 1;
  for(int x : a[pos]){
    if(!visited[x]){
      leaf = 0;
      dfs(x, am);
    }
  }
  if(leaf){
    res++;
  }
}

int main(){
  int n, i, x, y;
  cin >> n >> m;
  for(i = 0; i < n; i++){
    cin >> cat[i];
  }
  for(i = 0; i < n-1; i++){
    cin >> x >> y;
    a[x-1].push_back(y-1);
    a[y-1].push_back(x-1);
  }
  dfs(0, 0);
  cout << res << endl;
}
