#include <bits/stdc++.h>
using namespace std;

char checkOpen[3] = {
  '(',
  '[',
  '{'
};

char checkClose[3] = {
  ')',
  ']',
  '}'
};

map<char, char> mapMerge = {
  {'(',')'},
  {'{','}'},
  {'[',']'}
};

bool ok(string s) {
    stack<char>st;
    for (int i = 0; i < s.size(); i++) {
      
      for (auto x : checkOpen) {
        if (s[i] == x) {
          st.push(x);
          break;
        }
      }
      
      for (auto x : checkClose) {
        if (s[i] == x) {
          if (st.empty()) return false;
          
          char c = st.top();
          st.pop();
          
          if (mapMerge[c] != x) {
            return false;
          }
        }
      }
    }

    return (st.size() == 0);
}

int main() 
{
  int t;
  cin >> t;
  while(t--) {
    string s;
    cin >> s;
    if (ok(s)) {
      cout << "YES" << '\n';
    }
    else {
      cout << "NO" << '\n';
    }
  }
  
 
}