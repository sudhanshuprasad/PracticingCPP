#include<iostream>
using namespace std;


int febonacci(int n){

    if(n==0 || n==1){
        return n;
    }

    return febonacci(n-1)+febonacci(n-2);

}

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
    cout<<febonacci(n)<<endl;

    return 0;
}