#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    int arr[n];
    for(int i;i<n;i++){
        cin>>arr[i];
    }

    for(int i;i<n;i++){
        for(int i;arr[i]>arr[i+1];i++){
            int temp=arr[i+1];
            arr[i+1]=arr[i];
            arr[i]=temp;
        }
    }

    for(int i;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}