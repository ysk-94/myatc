#include <iostream>
#include <cstring>

using namespace std;

int main() {
  string strs[] = { "dream", "dreamer", "erase", "eraser" };
  char s[100];

  cin >> s;

  for (int i=0; i<strlen(s); i++) {
    cout << i << endl;
  } 

  return 0;
}

