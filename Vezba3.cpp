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

void newMatrix(int matrix[10][10], int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            matrix[i][j] = matrix[i][j] / 10 % 10;
        }
    }
    cout<<"New matrix looks like: "<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
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
    cout<<"Your current matrix looks like this:"<<endl;
    printMatrix(matrix, n, m);
    newMatrix(matrix, n, m);
    return 0;
}
