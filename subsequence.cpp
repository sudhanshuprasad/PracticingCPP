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

void subsequenceASCII(string s, string ans){

    if(s.length()==0){
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    int code=ch;
    string restString=s.substr(1);

    subsequenceASCII(restString,ans);
    subsequenceASCII(restString,ans+ch);
    subsequenceASCII(restString,ans+to_string(code));

}

int main(){
    subsequence("abc","");
    cout<<endl;
    subsequenceASCII("AB","");
}