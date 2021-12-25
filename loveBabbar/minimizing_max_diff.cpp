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

int avg(int arr[], int n){
    // return 7;
    return (min(arr,n)+max(arr,n))/2;
    // int sum=0;
    // for (int i = 0; i < n; i++){
    //     sum+=arr[i];
    // }
    // return sum/n;
}
int avg(int arr[], int n, int k){
    // return 7;
    return ((min(arr,n)+max(arr,n))/2)+k/2;
}

int minimized_max_difference(int arr[], int n, int k){
    int diffpos,diffnig,diffmin;
    for(int k=0; k<n; k++){
        for(int i=0; i<n; i++){
            if(arr[i]>avg(arr,n,k) && arr[i]>=k){
                arr[i]-=k;
            }
            else{
                arr[i]+=k;
            }
            // cout<<arr[i]<<" ";
        }
        diffpos=max(arr,n)-min(arr,n);

        //running again but for negative side
        for(int i=0; i<n; i++){
            if(arr[i]>avg(arr,n,k) && arr[i]>=k){
                arr[i]-=k;
            }
            else{
                arr[i]+=k;
            }
            // cout<<arr[i]<<" ";
        }
        diffnig=max(arr,n)-min(arr,n);
    }

    return diffmin;
}

int main(){
    int arr[]={2,6,3,4,7,2,10,3,2,1};
    int n=10, k=5;
    cout<<minimized_max_difference(arr,n,k);
}