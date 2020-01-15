#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string divide[4] = { "dream", "dreamer", "erase", "eraser" };

int main() {
  string S;
  cin >> S;

  // 反転する
  reverse(S.begin(), S.end());
  // 検索キーも反転
  for (int i=0; i<4; i++) {
    reverse(divide[i].begin(), divide[i].end());
  }

  bool can = true;
  for (int i=0; i<S.size();) {
    bool can2 = false;
    for (int j=0; j<4; j++) {
      string d = divide[j];
      if (S.substr(i, d.size()) == d) {
        can2 = true;
        i += d.size();
      }
    }
    if (!can2) {
      can = false;
      break;
    }
  }

  if (can) cout << "YES" << endl;
  else cout << "NO" << endl;
}

