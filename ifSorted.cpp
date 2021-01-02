#include<iostream>
using namespace std;

bool sorted(int arr[], int n){

    if(n==1){
        return true;
    }

    bool restArray=sorted(arr+1,n-1);

    return arr[0]<arr[1] && restArray;
}

int main(){

    int arr[5];
    
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }

    cout<<sorted(arr,5);

    return 0;
}