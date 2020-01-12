#include <iostream>

using namespace std;

int main() {
  int N, A, B;

  for (int i=0; i<3; i++) {
    if (i == 0) cin >> N;
    else if (i == 1) cin >> A;
    else if (i == 2) cin >> B;
  }

  int result = 0;
  for (int i=1; i<=N; i++) {
    // 各桁の総和
    int dig;
    int sum = 0;
    int num = i;
    for (int j = 0; j<5; j++) {
      dig = num % 10;
      sum += dig;
      num = num / 10;
    }
    // A以上B以下であればresultに足す
    if (A <= sum && sum <= B) result += i;
  } 

  cout << result;

  return 0;
}
  
