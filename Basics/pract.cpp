#include<iostream>
using namespace std;
int main(){
    int r, c;
    cin >> r >> c;
    int A[10][10], B[10][10], C[10][10];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> A[i][j];
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> B[i][j];
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            C[i][j] = A[i][j] + B[i][j];
        }
    }
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cout << C[i][j] << " "; 
        }
       
    }
}