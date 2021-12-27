#include<iostream>
using namespace std;

#define n 100

class stack{
    int* arr;
    int top;

    public:
        stack(){
            arr=new int[n];
            top=-1;
        }
        
        void push(int x){
            if(top==n-1){
                cout<<"stack is full"<<endl;
            }
            else{
                top++;
                arr[top]=x;
            }
        }

        void pop(){
            if(top==-1){
                cout<<"nothing to pop"<<endl;
            }
            else{
                top--;
            }
        }

        int Top(){
            if(top==-1){
                cout<<"stack is empty"<<endl;
                return -1;
            }
            else{
                return arr[top];
            }
        }

        bool empty(){
            return top==-1;
        }

};

int main(){
    stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.empty()<<endl;
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    // st.pop();
    cout<<st.empty()<<endl;
    return 0;
}