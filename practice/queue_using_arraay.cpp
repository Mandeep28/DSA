#include<bits/stdc++.h>
#define n 10
using namespace std;

class Queue{
    int *arr;
    int front, back;
    public:
    Queue(){
        arr = new int[n];
        front = back = -1;
    }
    /*
    void push (int x);
    void pop();
    int peek();
    bool empty();   
    */
   void push (int x) {
       if( back == n-1) {
           cout<<"queue is full..."<<endl;
           return ;
       }
       if( front ==-1) {
           front ++;
       }
       back ++;
       arr[back] = x;
   }
   void pop() {
       if( empty()) {
           cout<<"queue is empty"<<endl;
           return ;
       }
       front ++;
   }
   int peek () {
       if( empty()) {
           cout<<"NO elements in the queue..."<<endl;
           return -1;
       }
        return arr[front];
   }
   bool empty() {
       if(front==-1 || front >back) {
           return true;
       }
       else {
           return false;
       }
   }
};// end of the class Queue

int main() {
    
        Queue q;
        q.push(1);
        q.push(2);
        q.push(3);
        q.push(4);
        cout<<q.empty()<<endl;

        cout<<q.peek()<<endl;
        q.pop();

        cout<<q.peek()<<endl;
        q.pop();

        cout<<q.peek()<<endl;
        q.pop();

        cout<<q.peek()<<endl;
        q.pop();

       cout<<q.empty()<<endl;
        
    return 0;
}