#include<bits/stdc++.h>
#include<vector>
#include<algorithm>
using namespace std;

void move(vector<int> &arr){
    int n=arr.size();
    int ptr=0;
    for(int i=0;i<n;i++){
        if(arr[ptr]<0){
            arr.push_back(arr[ptr]);
            // cout<<ptr<<" ";
            arr.erase(arr.begin()+ptr);
            // count++;
        }else{
            ptr++;
            // cout<<"else"<<ptr<<" ";
        }
    }
    // int i=0;
    // while(i<n){
    //     if(arr[i]<0){
    //         arr.push_back(arr[i]);
    //         cout<<i<<" ";
    //         arr.erase(arr.begin()+i);
    //         // count++;
    //     }else{
    //         i++;
    //     }
    // }
    // cout<<endl;
}

int main(){
    vector<int> arr{5,4,3,2,1,-2,-3,-4,-5,-6,-7,-8,9,8,7,6};
    move(arr);
    //this is a brute force approach
    //sort the array, that will have better time complexity
    for (int i = 0; i < arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
