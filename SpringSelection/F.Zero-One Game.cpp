#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int step = 0;
bool checker(string s) {
  bool ok = false;
  for(int i = 1; i < s.size(); i++) {
    if(s[i-1] == '0' && s[i+1] == '0') {ok = true;}
  }
  return ok; 
}
string doer(string s) {
  int size = s.size();
  string ret = "";
  ret += s[0];
  for(int i = 1; i < size-1; i++) {
    char bef = s[i-1];
    char af = s[i+1];
    if( bef != '0' || af != '0') {ret += s[i];}
    else step++;
  }
  ret += s[size-1];
  return ret;
}
string func(string s) {
  if(checker(s)) {return func(doer(s));}
  return s;
}
int main () {
    int g;
    cin >> g;
    vector <string> ans;
    for(int j = 0; j < g; j++) {
    step = 0;
    int n;
    cin >> n;
    string s = "";
    for(int i = 0; i < n; i++) {
      char d;
      cin >> d;
      s += d;
    }
    func(s);
    if(step % 2 == 0) {ans.push_back("Bob\n");}
    else ans.push_back("Alice\n");
    }
    for(string a : ans) {
      cout << a;
    }
}