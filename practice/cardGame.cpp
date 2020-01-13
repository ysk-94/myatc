#include <iostream>

using namespace std;

int main() {
  int N, a[100];

  cin >> N;

  for (int i=0; i<N; i++) cin >> a[i];

  // ソート
  for (int i=0; i<N-1; i++) {
    for (int j=N-1; j>i; j--) {
      // 降順にならびかえ
      if (a[j] > a[j-1]) {
        int tmp = a[j];
        a[j] = a[j-1];
        a[j-1] = tmp;
      }
    }
  }

  int score1, score2;
  score1 = 0;
  score2 = 0;

  for (int i=0; i<N; i++) {
    if (i%2==0) {
      score1 += a[i];
    } else {
      score2 += a[i];
    }
  }


  int gap = score1 - score2;
  cout << gap << endl;
}
