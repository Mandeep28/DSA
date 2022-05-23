#include <bits/stdc++.h>
using namespace std;

// node class
class node
{
public:
    int data;
    node *link;
    node(int data)
    {
        this->data = data;
        this->link = NULL;
    }
};

// create a node function
node *create()
{

    node *ptr, *head = NULL;
    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        int data;
        cout << "enter data: ";
        cin >> data;
        if (head == NULL)
        {
            head = new node(data);
            ptr = head;
        }
        else
        {
            ptr->link = new node(data);
            ptr = ptr->link;
        }
        cout << "want to continue(y/n)";
        cin >> ch;
    }
    ptr->link = NULL;
    return head;
}

// display the all the nodes
void display(node *&head)
{
    if (head == NULL)
    {
        cout << "List is empty ....";
        return;
    }
    node *temp = head;
    int counter = 0;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->link;
        counter++;
    }
    cout << "NULL" << endl;
    // cout<<"Total size of the linked list is :"<<counter<<endl;
}
int main()
{
    node *head = NULL;
    char answer ='n';
    cout<<"Want to create the linked list :";
    cin>>answer;
    if(answer =='y' || answer =='Y') {
    head = create();

    }
    else {
        cout<<"Program end ...";
        return 0;
    }
    display(head);
    // cout<<head->data<<endl;
    return 0;
}