#include <iostream>
#include <algorithm>
using namespace std;

int a[100000];

int main(){
  int n, i;
  cin >> n;
  for(i = 0; i < n; i++){
    cin >> a[i];
  }
  int pos = 0, torev = 0, len = 0, am = 1;
  for(i = 1; i < n; i++){
    if(a[i] < a[i-1]){
      am++;
    }
    else{
      if(am > len){
        len = am;
        torev = pos;
      }
      pos = i;
      am = 1;
    }
  }
  if(am > len){
    len = am;
    torev = pos;
  }
  reverse(a+torev, a+torev+len);
  for(i = 1; i < n; i++){
    if(a[i] < a[i-1]){
      cout << "no" << endl;
      return 0;
    }
  }
  cout << "yes" << endl << torev+1 << " " << torev+len << endl;
}
