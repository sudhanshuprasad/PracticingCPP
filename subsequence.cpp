#include<iostream>
#include<string>
using namespace std;

void subsequence(string s, string ans){

    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    string restString=s.substr(1);

    subsequence(restString,ans);
    subsequence(restString,ans+ch);

}

int main(){
    subsequence("abc","");
}