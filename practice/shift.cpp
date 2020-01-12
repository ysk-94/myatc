#include<iostream>

using namespace std;

bool checkAllEven(int N, int array[]) {
  bool result = true;
  for (int i=0; i<N; i++){
    if (array[i] % 2 !=0) {
      result = false;
    }
  }

 return result;
}

int main() {
  int N, array[200];
  
  cin >> N;
  for (int i=0; i<N; i++) cin >> array[i];

  bool isAllEven = checkAllEven(N, array); 

  int count = 0;
  while (isAllEven) {
    count++;
    for (int i=0; i<N; i++) {
      array[i] = array[i] / 2;
    }

    isAllEven = checkAllEven(N, array);
  }

  cout << count;
}
