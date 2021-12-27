#include<iostream>
#include<stack>
using namespace std;

#define n 100

class stackstr{
    string* arr;
    int top;

    public:
        stackstr(){
            arr=new string[n];
            top=-1;
        }
        
        void push(string x){
            if(top==n-1){
                cout<<"stack is full ";
            }
            else{
                top++;
                arr[top]=x;
            }
        }

        void pop(){
            if(top==-1){
                cout<<"nothing to pop ";
            }
            else{
                top--;
            }
        }

        string Top(){
            if(top==-1){
                cout<<"stack is empty ";
                return "";
            }
            else{
                return arr[top];
            }
        }

        bool empty(){
            return top==-1;
        }

};

void reverseString(string str){
    
    // stack<string> s; //this is stack using STL
    stackstr s;
    for (int  i = 0; i < str.length(); i++){
        string word="";
        while (str[i]!=' ' && i<str.length()){
            word+=str[i];
            i++;
        }
        s.push(word);
    }
    
    while (!s.empty()){
        cout<<s.Top()<<" ";
        s.pop();
    }
        
}

int main(){
    string s="hello who is this?";
    reverseString(s);
}