#include <iostream>

using namespace std;

void readMatrix(int matrix[10][10], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin>>matrix[i][j];
        }
    }
}

void printMatrix(int matrix[10][10], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
void sumOfEven(int matrix[10][10], int n, int m) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] % 2 == 0 ) {
                sum += matrix[i][j];
            }
        }
    }
    cout<<"Sum of even elements is: "<<sum<<endl;
}

void sumOfOdd(int matrix[10][10], int n, int m) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (matrix[i][j] % 2 == 1) {
                sum += matrix[i][j];
            }
        }
    }
    cout<<"Sum of odd elements is: "<<sum<<endl;

}

int main() {
    int matrix[10][10];
    int n, m;
    cout<<"Insert amount of rows and columns"<<endl;
    cin>>n>>m;
    if (n > 10 || m > 10) {
        cout<<"You inserted more rows or columns than expected"<<endl;
        return 0;
    }
    cout<<"Insert elements of the matrix"<<endl;
    readMatrix(matrix, n, m);
    printMatrix(matrix, n, m);
    sumOfOdd(matrix, n, m);
    sumOfEven(matrix, n, m);
    return 0;
}
