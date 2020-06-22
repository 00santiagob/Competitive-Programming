#include <iostream>
#include <vector>
using namespace std;

long long odd, even, visited[100000];
vector <int> a[100000];

void dfs(int pos, int level){
  visited[pos] = true;
  if(level == 1){
    odd++;
  }
  else{
    even++;
  }
  for(int x : a[pos]){
    if(!visited[x]){
      dfs(x, level^1);
    }
  }
}

int main(){
  long long x, y, n, i;
  cin >> n;
  for(i = 0; i < n-1; i++){
    cin >> x >> y;
    a[x-1].push_back(y-1);
    a[y-1].push_back(x-1);
  }
  dfs(0, 0);
  cout << odd*even-n+1 << endl;
}
