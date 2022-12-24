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

void swapMaxMin(int matrix[10][10], int n, int m) {
    int j_max = 0, i_max = 0;
    int j_min = 0, i_min = 0;
    int max = matrix[0][0];
    int min = matrix[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (max < matrix[i][j]) {
                max = matrix[i][j];
                i_max = i;
                j_max = j;
            }

            if (min > matrix [i][j]) {
                min = matrix[i][j];
                i_min = i;
                j_max = j;
            }
        }
    }
    int temp = matrix[i_min][j_min];
    matrix[i_min][j_min] = matrix[i_max][j_max];
    matrix[i_max][j_max] = temp;
    cout<<"The changed matrix looks like: "<<endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main () {
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
    swapMaxMin(matrix, n, m);
    return 0;
}
