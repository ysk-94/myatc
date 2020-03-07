#include <iostream>

using namespace std;

int main() {
  int N, A[100];
  cin >> N;

  for (int i=0; i<N; i++) {
    cin >> A[i];
  }

  bool isDenied = false;
  for (int i=0; i<N; i++) {
    if (A[i] % 2 == 0) {
     if (A[i] % 3 != 0 || A[i] % 5 != 0) {
      isDenied = true;
     }
    }
  }

  if (isDenied) cout << "DENIED" << endl;
  else cout << "APPROVED" << endl;
}

