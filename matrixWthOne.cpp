// Write a java program that randomly fills in 0s and 1s into a 4-by-4 matrix, prints the matrix, and 
// finds the first row and column with the most 1s. Here is a sample run of the program:

#include<iostream>
#include<stdlib.h>
using namespace std;

int randomeMatrix(){
    int mat[4][4];
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            mat[i][j]=rand()%2;
        }
    }
    return mat;
}

// int rowmax1s(int** mat){

// }

// int rowmax1s(int** mat){

// }

void display(int** mat){
    for (int i = 0; i < 4; i++){
        for (int j = 0; j < 4; j++){
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    cout<<randomeMatrix();
}