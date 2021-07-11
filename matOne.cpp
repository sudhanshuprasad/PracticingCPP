// Write a java program that randomly fills in 0s and 1s into a 4-by-4 matrix, prints the matrix, and 
// finds the first row and column with the most 1s. Here is a sample run of the program:

#include<iostream>
#include<stdlib.h>
#include<ctime>
using namespace std;

int main(){
    srand((unsigned)time(0));
    int mat[4][4];
    
    //randome matrix generation
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){ 
            mat[i][j]=rand()%2;
        }
    }
    
    //display
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){ 
            cout<<mat[i][j]<<" ";
        }cout<<endl;
    }

    //row with maximum number of 1s
    int count=0,countmax=0;
    int rownum=0;
    for (int  i = 0; i < 4; i++){
        for(int j=0; j<4; j++){
            count+=mat[i][j];
        }
        if(countmax<count){
            countmax=count;
            rownum=i;
        }
        count=0;
    }
    cout<<"\n"<<rownum<<endl;
    
    //column with maximum number of 1s
    countmax=0;
    count=0;
    int columnnum=0;
    for (int  i = 0; i < 4; i++){
        for(int j=0; j<4; j++){
            count+=mat[j][i];
        }
        if(countmax<count){
            countmax=count;
            columnnum=i;
        }
        count=0;
    }
    cout<<columnnum<<endl;
    
}