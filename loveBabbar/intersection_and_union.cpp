#include <bits/stdc++.h>
using namespace std;

vector<int> intersection(vector<int> a, vector<int> b){
    vector<int> ins;
    for(int i=0;i<a.size();i++){
        for(int j=0;j<b.size();j++){
            if(a[i]==b[j]){
                ins.push_back(a[i]);
            }
        }
    }
    return ins;
}

vector<int> uni(vector<int> a, vector<int> b){
    vector<int> uni=b;
    for(int i=0;i<a.size();i++){
        bool push=true;
        int key=a[i];
        for(int j=0;j<b.size();j++){
            if(key==b[j]){
                push=false;
            }
        }
        if(push){
        uni.push_back(a[i]);
        }
    }
    return uni;
}

int main(){
    vector<int> a{0,1,2,3,4};
    vector<int> b{9,8,7,6,5,4,3,2};
    // vector<int> ins=intersection(a,b);
    vector<int> ins=uni(a,b);
    for (int i = 0; i < ins.size(); i++){
        cout<<ins[i]<<" ";
    }
    
}