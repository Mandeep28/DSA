#include <bits/stdc++.h>
using namespace std;
// class node
class node
{
public:
    int data;
    node *next;
    // constructor
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

// class Queue
class Queue
{
    node *front;
    node *back;

public:
    // constructor
    Queue()
    {
        front = NULL;
        back = NULL;
    }
    // insert into linked list
    void push(int x)
    {
        node *temp = new node(x);
        if (front == NULL)
        {
            front = temp;
            back = temp;
        }
        back->next = temp;
        back = temp;
    }
    // deletion into linked list 
    void pop()
    {
        if (empty())
        {
            cout << "queue is empty..." << endl;
            return;
        }
        node *toDelete = front;
        front = front->next;
        delete toDelete;
    }
    // peek funciton
    int peek()
    {
        if (empty())
        {
            cout << "NO elements to display..." << endl;
            return -1;
        }
        return front->data;
    }
    // check if the linked list is empty or not 
    bool empty()
    {
        if (front == NULL )
        {
            return true;
        }
       
            return false;
        
    }
};

int main()
{
    Queue q;
    q.pop();
    q.push(1);
    cout<<q.peek()<<endl;
    

    return 0;
}