#include<iostream>

using namespace std;

bool isEven(int r) {
  return r%2 == 0;
}


int main() {
  int a, b;
  for (int i=0; i<2; i++) {
    if (i==0) {
      cin >> a;
    } else {
      cin >> b;
    }
  }

  int result = a * b;

  if (isEven(result)) {
    cout << "Even";
  } else {
    cout << "Odd";
  }
}
