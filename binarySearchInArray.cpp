#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int s=0,e=n;
    while(s!=n){
        
        int mid=(n+s)/2;
        
        if (key==s){
            return s;
        }
        else if(key<mid){
            n=mid;
        }
        else if(key>mid){
            s=mid;
        }
    }
}
int main(){
    int n,key;
    cin>>n;
    
    int arr[n];
    cout<<"enter elements ";
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }

    cout<<"search for ";
    cin>>key;

    cout<<binarySearch(arr,n,key);
    return 0;
}