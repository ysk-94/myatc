#include<iostream>

using namespace std;

int main() {
  string frames;
  cin >> frames;

  int result = 0;
  for (int i=0; i<3; i++) {
    if (frames[i] == '1') result++;
  }

  cout << result;
}
