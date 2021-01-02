#include<iostream>
using namespace std;

void decreasing(int n){
    
    if(n==1){
        cout<<n<<endl;
        return;
    }

    cout<<n<<endl;
    decreasing(n-1);
}

void increasing(int n){
    
    if(n==1){
        cout<<n<<endl;
        return;
    }

    increasing(n-1);
    cout<<n<<endl;
}

int main(){
    
    int n;
    cin>>n;
    decreasing(n);
    cout<<endl;
    increasing(n);

    return 0;
}