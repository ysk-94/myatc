#include <iostream>
#include <array>

using namespace std;

int main() {
  int H, N;
  cin >> H;
  cin >> N;

  array<int, 100000> A;
  for (int i=0; i<N; i++) {
    cin >> A[i];
  }

  bool result = false;
  for (int i=0; i<N; i++) {
    H = H - A[i];
    if (H <= 0) {
      result = true;
      break;
    }
  }

  if (result) cout << "Yes" << endl;
  else cout << "No" << endl;
}

