#include <iostream>
#include <vector>
using namespace std;
int main() {

    vector<vector<int> > A(2, vector<int>(2));
    A[0][0] = 1;
    A[0][1] = 2;
    A[1][0] = 3;
    A[1][1] = 4;
    vector<vector<int> > B(2, vector<int>(2));
    B[0][0] = 1;
    B[0][1] = 2;

    B[1][0] = 3;
    B[1][1] = 4;


    vector<vector<int> > C(2, vector<int>(2));
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 2; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            cout << C[i][j]<<" ";
        }
        cout << endl;
    }


}
