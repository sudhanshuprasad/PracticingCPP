#include<iostream>
using namespace std;

int power(int n, int p){

    if(p==0){
        return 1;
    }
    
    n=n*power(n,p-1);

    return n;
}

int factorial(int n){
    
    if(n==0){
        return 1;
    }
    
    int fac;
    fac=n*factorial(n-1);

    return fac;
}

int main(){

    int n,p;

    cin>>n>>p;
    
    cout<<factorial(n)<<endl;
    cout<<power(n,p)<<endl;

    return 0;
}