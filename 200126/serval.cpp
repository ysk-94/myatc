#include <iostream>

using namespace std;

int main() {
  int H, A, count = 0;

  cin >> H;
  cin >> A;

  while(H > 0) {
    H = H - A;
    count++;
  }

  cout << count << endl;
}

