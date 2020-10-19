#include<iostream>
using namespace std;

void arrayRotation (int A[], int length ) {
    int temp, i;
    temp = A[length-1];
    for ( i = length-1 ; i > 0; i-- ) {
        A[i] = A[i-1];
    }
    A[0] = temp;
}

int main () {
    int A[5] = {2, 3, 4, 5, 6};
    arrayRotation(A, 5);
    for ( int i = 0 ; i < 5; i++ ) {
        cout<<A[i]<<"\t";
    }
    return 0;
}