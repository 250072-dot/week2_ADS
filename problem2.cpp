#include <iostream>
using namespace std;

int main () {
    int A[5][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12},{13,14,15}};
    int B[3][6] = {{1,2,3,4,5,6},{7,8,9,10,11},{12,13,14,15,16}};



int AB[5][6] = {};

for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 6; j++) {
        for (int k = 0; k < 3; k++) {
            AB[i][j] += A[i][k] * B[k][j];
        }

    }
}

for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 6; j++) {
        cout << AB[i][j]<<" ";

    }
    cout << endl;
}








}