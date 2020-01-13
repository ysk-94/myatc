#include <iostream>

using namespace std;

int main() {
  int N,a[100];

  cin >> N;

  for (int i=0; i<N; i++) {
    cin >> a[i];
  }

  for (int i=0; i<N-1; i++) {
    for (int j=N-1; j >= 0; j--) {
      if (i != j && a[i] == a[j]) {
        a[j] = -1;
      }
    }
  }

  int count = 0;
  for (int i=0; i<N; i++) {
    if (a[i] != -1) count++;
  }

  cout << count;

  return 0;
}

