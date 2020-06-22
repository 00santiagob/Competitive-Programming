#include <iostream>
using namespace std;

int main(){
  int n, i, l = 0;
  string x = "CODEFORCES", s;
  cin >> s;
  while(l < x.length() && s[l] == x[l]){
    l++;
  }
  int len_r = x.length()-l;
  string ll = string(s.begin(), s.begin()+l);
  string rr = string(s.end()-len_r, s.end());
  if(ll+rr == x){
    cout << "YES" << endl;
  }
  else{
    cout << "NO" << endl;
  }
}
