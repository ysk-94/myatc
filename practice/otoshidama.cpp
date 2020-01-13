#include <iostream>

using namespace std;

int main() {
  int N, Y;

  for (int i=0; i<2; i++) {
    if (i==0) cin >> N;
    else cin >> Y;
  }

  int a = -1, b = -1, c = -1;
  for (int i=0; i<N+1; i++) {
    for (int j=0; j<N+1-i; j++) {
      if (10000*i + 5000*j + 1000 * (N-i-j) == Y) {
        a = i; b = j; c = N-i-j;
      }
    }
  }

  cout << a << " " << b << " " << c << endl;
  
  return 0;
}

