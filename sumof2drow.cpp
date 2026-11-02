// 10. Sum Of Every Row In 2D Matrix
#include <iostream>
using namespace std;

class Solution {
public:
    int* rowSums(int** arr, int N, int M) {
        int* result = new int[N];

        for (int i = 0; i < N; i++) {
            int sum = 0;

            for (int j = 0; j < M; j++) {
                sum += arr[i][j];
            }

            result[i] = sum;
        }

        return result;
    }
};

int main() {
    int r, c;
    cout << "Enter number of rows and columns" << endl;
    cin >> r >> c;

    int** mat = new int*[r];
    for (int i = 0; i < r; i++) {
        mat[i] = new int[c];
    }

    cout << "Enter " << r * c << " elements" << endl;

    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            cin >> mat[i][j];
        }
    }

    Solution s;
    int* res = s.rowSums(mat, r, c);

    for (int i = 0; i < r; i++) {
        cout << "Sum of row " << i + 1 << " is - " << res[i] << endl;
    }

    // free memory
    delete[] res;
    for (int i = 0; i < r; i++) {
        delete[] mat[i];
    }
    delete[] mat;

    return 0;
}