#include<bits/stdc++.h>
using namespace std;

int max(int arr[], int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }    
    }
    return max;
}

int min(int arr[], int n){
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }    
    }
    return min;
}

int max_diff(int arr[], int n, int k, int p){
    for(int i=0; i<n; i++){
        if(arr[i]>p && arr[i]>=k){
                arr[i]-=k;
        }
        else{
            arr[i]+=k;
        }
    }
    return max(arr,n)-min(arr,n);
}

int minimized_max_diff(int arr[], int n, int k){
    int min=max_diff(arr,n,k,1);
    for (int i = 2; i < n; i++){
        int max_d=max_diff(arr,n,k,i);
        if(min>max_d){
            min=max_d;
        }
    }
    return min;
}

int main(int argc, char const *argv[]){
    
    int k=5,n=10;
    cin>>k>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<minimized_max_diff(arr,n,k);
    return 0;
}
