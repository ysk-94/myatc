#include <iostream>
#include <string>

using namespace std;

int main() {
  int a, b, c;
  std::string s;
  cin >> a;

  for (int i=0; i<2; i++) {
    if (i==0) {
      cin >> b;
    } else {
      cin >>c;
    }
  }

  cin >> s;

  cout << a + b + c << " " << s << endl;

  return 0;
}
