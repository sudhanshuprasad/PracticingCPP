#include<iostream>
#include<string>
using namespace std;

void permutation(string s,string ans){

    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    for(int i=0;i<s.length();i++){
        char ch=s[i];
        string restString=s.substr(0,i)+s.substr(i+1);
        permutation(restString,ans+ch);
    }
}

int main(){
    permutation("abc","");
}