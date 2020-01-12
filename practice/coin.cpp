#include <iostream>

using namespace std;

int main() {
  int A, B, C, X, result, sum;

  cin >> A;
  cin >> B;
  cin >> C;
  cin >> X;

  result = 0;
  for (int i=0; i<A+1; i++) {
    for (int j=0; j<B+1; j++) {
      for (int k=0; k<C+1; k++) {
        if (500*i + 100*j + 50*k == X) result++;
      }
    }
  }
  cout << result;
}

