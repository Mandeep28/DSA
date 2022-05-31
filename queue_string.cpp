#include <bits/stdc++.h>
using namespace std;
#define MAXSIZE 5
class Queue
{
    private:
    string q[MAXSIZE];
    int front, rear;

public:
    Queue()
    {
        front = 0;
        rear = -1;
    }
    void enqueue(string);
    string dequeue();
    void display();
    bool isEmpty();

    ~Queue()
    {
        cout << "Destroying Queue"<<endl;
    }
};

void Queue ::enqueue(string item)
{
    if (rear == (MAXSIZE - 1))
        cout << "Overflow : Queue Full"<<endl;
    else
    {
        rear++;
        q[rear] = item;
    }
    return;
}

bool Queue ::isEmpty()
{
    return (rear == -1);
}

string Queue ::dequeue()
{
    string item;
    item = q[front];
    if (front < rear)
        front++;
    else
    {
        front = 0;
        rear = -1;
    }
    return (item);
}

void Queue ::display()
{
    // cout<<"front :"<<front<<"and rear is :"<<rear<<endl;
    if(rear == -1) {
        cout<<"queue is empty ..."<<endl;
        return ;
    }
    for (int i = front; i <= rear; i++)
    {
        cout << q[i] << " ";
    }
        cout << endl;
}

int main()
{
    Queue q1;
    int choice;
    string val;
    while(true) {
    cout <<endl<< "Choice 1.. Enqueue \t 2.Dequeue \t 3.Display \t 4.Exit"<<endl;
    cin >> choice;
    switch (choice)
    {
    case 1:
        cout << "Enter Element to insert";
        cin >> val;
        q1.enqueue(val);
        break;

    case 2:

        if (q1.isEmpty() == 1)
            cout << "Underflow:queue Empty"<<endl;
        else
        {
            string item;
            item = q1.dequeue();
            cout << "Element removed" << item<<endl;
        }
        break;

    case 3:
        q1.display();
        break;

    case 4:
        return 0;
    }
    
    } // end of while loop 
    return 0;
}