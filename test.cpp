#include <iostream>
#include "2DArrays.h"

using namespace std;

int main(){
    int rows, cols;
    cin >> rows >> cols;
    d2DArray A(rows, cols);
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            A[i][j]=j;
        }
    }
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            cout << A[i][j] << " " ;
        }
        cout << "\n";
    }



    return 0;
}
