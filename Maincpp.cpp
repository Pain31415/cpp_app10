#include <iostream>
#include <ctime>

using namespace std;

void sumArrays(int* A, int* B, int* C, int size) {
    for (int i = 0; i < size; i++) {
        C[i] = A[i] + B[i];
    }
}

int main() {
    const int size = 5;
    int A[size];
    int B[size];
    int C[size];

    srand(time(0));

    cout << "Array A: ";
    for (int i = 0; i < size; i++) {
        A[i] = rand() % 100;
        cout << A[i] << " ";
    }
    cout << endl;

    cout << "Array B: ";
    for (int i = 0; i < size; i++) {
        B[i] = rand() % 100;
        cout << B[i] << " ";
    }
    cout << endl;

    sumArrays(A, B, C, size);

    cout << "Sum of Arrays A and B: ";
    for (int i = 0; i < size; i++) {
        cout << C[i] << " ";
    }
    cout << endl;

    return 0;
}