#include <bits/stdc++.h>
using namespace std;

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
// create a node
node *create()
{
    node *head, *ptr;
    char ch = 'y';
    int val;
    head = NULL;
    while (ch == 'y' || ch == 'Y')
    {
        cout << "enter value:";
        cin >> val;
        if (head == NULL)
        {
            head = new node(val);
            ptr = head;
        }
        else
        {
            ptr->next = new node(val);
            ptr = ptr->next;
        }
        cout << "enter your choice(y/n):";
        cin >> ch;
    }
    return head;
}
void display(node *head)
{
    node *ptr;
    ptr = head;
    int count = 0;
    while (ptr != NULL)
    {
        cout << ptr->data << "->";
        ptr = ptr->next;
        count++;
    }
    cout << "NULL" << endl;
    cout<<"total node are:"<<count<<endl;
    // if(ptr->next == NULL) {

    // cout<<"yes it is null"<<endl;
    // }
}
void insertNode(node *&head, int data)
{

    if (head == NULL)
    {
        head = new node(data);
    }
    else
    {
        node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new node(data);
        // cout<<ptr->next<<endl;
    }
}
void insertAtPositon(node *&head, int data, int loc)
{
    node *ptr;
    ptr = head;
    if (loc == 1)
    {
        head = new node(data);
        head->next = ptr;
    }
    else
    {
        int count = 1;
        while (count < loc-1)
        {
            ptr = ptr->next;
            count ++;
        }
       node *temp = new node(data);
       temp->next = ptr->next;
       ptr->next = temp;
    }
}
int main()
{

    node *head = NULL;
    insertNode(head, 11);
    display(head);
    head = create();
    display(head);
    insertNode(head, 20);
    display(head);
    cout<<"enter loc:";
    int loc;
    cin>>loc;
    insertAtPositon(head, 23, loc);
    display(head);
    return 0;
}