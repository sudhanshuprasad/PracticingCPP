#include <bits/stdc++.h>
using namespace std;

int kthmax(vector<int> arr, int k){
    vector<int> sorted{arr[0]};
    for(int count=0; count<=k; count++){ 
        for(int i=1; i<arr.size(); i++){
            if(arr[i]>sorted[sorted.size()-1]){
                sorted.push_back(arr[i]);
            }
        }
    }
    return sorted[sorted.size()-1-k];
}

int main(){
    vector<int> arr{1,2,3,4,5,6,7,8,9,10,11,12};
    int k=3;
    // kthmax(arr, k);
    cout<<kthmax(arr,k);
}