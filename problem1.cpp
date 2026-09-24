#include <iostream>
using namespace std;
int main() {

  int row3 = 3;
  int row4 = 4;
  int ** A = new int*[row3];
  for (int i = 0; i < row3; i++) {
    A[i] = new int[row4];
  }
int value = 1;
  for (int i = 0; i < row3; i++) {
    for (int j = 0; j < row4; j++) {
      A[i][j] = value;
      cout << A[i][j] << " ";
    }
    cout << endl;
  }

for (int i = 0; i < row3; i++) {
  delete[] A[i];
}
  delete[] A;

}