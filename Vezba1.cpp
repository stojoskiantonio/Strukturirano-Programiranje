// Exercise 1
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

void MaxValue (int matrix[10][10], int n, int m) {
    int max = matrix[0][0];
    int position = 0;
    int secondPosition = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (max < matrix[i][j]) {
                max = matrix[i][j];
                position = i;
                secondPosition = j;

            }
        }
    }
    cout<<"Max element of the matrix is "<<max<<endl;
    cout<<"The position of the max element in the matrix is "<<position<<" "<<secondPosition<<endl;

}

void LowestValue (int matrix[10][10], int n, int m) {
    int max = matrix[0][0];
    int position = 0;
    int secondPosition = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (max > matrix[i][j]) {
                max = matrix[i][j];
                position = i;
                secondPosition = j;

            }
        }
    }
    cout<<"Min element of the matrix is "<<max<<endl;
    cout<<"The position of the min element in the matrix is "<<position<<" "<<secondPosition<<endl;
}

int sumOfMatrix(int matrix[10][10], int n, int m) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
        sum += matrix[i][j];
        }
    }
    return sum;
}

int averageInMatrix(int matrix[10][10], int n, int m, int elements) {
    int sum = 0;
    int average = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += matrix[i][j];
            average = sum / (float)elements;
        }
    }
    return average;
}

int main () {
    int matrix[10][10];
    int n, m;
    cout<<"Insert rows and columns"<<endl;
    cin>>n>>m;
    int numOfElements = n * m;
    cout<<"Insert elements for the matrix"<<endl;
    readMatrix(matrix, n, m);
    printMatrix(matrix, n, m);
    MaxValue(matrix, n, m);
    LowestValue(matrix, n, m);
    cout<<"Sum of matrix is "<<sumOfMatrix(matrix, n, m)<<endl;
    cout<<"The average number in the array is "<<averageInMatrix(matrix, n, m, numOfElements);
    return 0;
}