#include<bits/stdc++.h>
using namespace std;

int longest_sum(vector<int> arr){
    int max_sum=arr[0],sum=arr[0];
    for(int i=1;i<arr.size();i++){
        if(arr[i]>=0){
            sum += arr[i];
        }else{
            sum=0;
        }
        if(sum>max_sum){
            max_sum=sum;
        }
    }
    return max_sum;
}

int main(){
    vector<int> arr{1,2,4,5,6,-9,-8,-7,-6,-5,4,6,8,0,5,-1,-2};
    cout<<longest_sum(arr);
}