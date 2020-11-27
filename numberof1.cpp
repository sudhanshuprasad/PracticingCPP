#include<iostream>
using namespace std;

int numberof1(int n){
    int count=0;
    while(n){
        n = n & (n-1);
        count++;
    }
    return count;
}

int main(){
    cout<<numberof1(5)<<endl;
    return 0;
}