#include<bits/stdc++.h>
using namespace std;
#define n 100
class Stack {
    int *stack;
    int top ;
    // push function 
    public:
    Stack(){
        stack = new int[n];
        top = -1;
    }
    void push(int item) {
        if( top == n-1) {
            cout<<"stack is full ..."<<endl;
            return ;
        }
        else {
            top++;  
            stack[top] = item;
        }
    }
    // pop function 
    int pop() {
        if(top == -1) {
            cout<<"stack is empty ..."<<endl;
            return 0;
        }
        else {
            int temp = stack[top];  //  for degugging 
            top --;
            return 1;
        }
    }
    // peek function 
    int peek() {
        if( top ==-1) {
            cout<<"stack is empty ..."<<endl;
            return -1;
        }
        return stack[top];
    }
    // isempty function 
    bool isempty() {
        if( top ==-1) {
            return true;
        }
        else  {
            return false;
        }
    }
};
int main() {
    Stack st;
    st.push(10);  // st = 0
    st.push(11);  // st = 1 
    st.push(12);  // st = 2
    cout<<st.isempty()<<endl;  // return false 
    cout<<st.peek()<<endl;   // return 12

    cout<<st.pop()<<endl;  // top = 1
    cout<<st.pop()<<endl;  // top = 0

    cout<<st.peek()<<endl;  //return  10 

    cout<<st.pop()<<endl; // top = -1 
    cout<<st.pop()<<endl;  // return stack is empty 
    cout<<st.pop()<<endl;  // return stack is empty 
    cout<<st.isempty()<<endl;   // return true
    return 0;
}