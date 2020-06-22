#include <iostream>
#include <map>
#include <vector>
using namespace std;

map<string, int> mp;
int now = 1;
vector <int> a[1000];
string t[200][2];
int visited[1000];

int dfs(int pos){
  visited[pos] = true;
  int res = 1;
  for(int x : a[pos]){
    if(!visited[x]){
      res = max(res, 1+dfs(x));
    }
  }
  return res;
}

int main(){
  int n, i, j;
  cin >> n;
  for(i = 0; i < n; i++){
    string asd;
    cin >> t[i][0] >> asd >> t[i][1];
    for(j = 0; j < t[i][0].length(); j++){
      if(t[i][0][j] >= 'A' && t[i][0][j] <= 'Z'){
        t[i][0][j] = (t[i][0][j]-'A'+'a');
      }
    }
    for(j = 0; j < t[i][1].length(); j++){
      if(t[i][1][j] >= 'A' && t[i][1][j] <= 'Z'){
        t[i][1][j] = (t[i][1][j]-'A'+'a');
      }
    }
    if(!mp[t[i][0]]){
      mp[t[i][0]] = now++;
    }
    if(!mp[t[i][1]]){
      mp[t[i][1]] = now++;
    }
  }
  for(i = 0; i < n; i++){
    a[mp[t[i][1]]].push_back(mp[t[i][0]]);
  }
  cout << dfs(mp["polycarp"]) << endl;
}
