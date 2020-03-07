#include <iostream>
#include <array>

using namespace std;

int main() {
  int N, K;

  array<long long, 200000> H;

  cin >> N;
  cin >> K;

  for (int i=0; i<N; i++) {
    cin >> H[i];
  }

  for (int i=0; i<N-1; i++) {
    for (int j=N-1; j>i; j--) {
      if (H[j] > H[j-1]) {
        int tmp = H[j];
        H[j] = H[j-1];
        H[j-1] = tmp;
      }
    }
  }

  long long cnt = 0;
  for (int i=K; i<N; i++) {
    cnt += H[i];
  }

  cout << cnt << endl;

}

