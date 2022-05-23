#include <bits/stdc++.h>
using namespace std;

// node class which has two public member one is data of type int and other is link of type node class
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

// create the linked list which return the head pointer 
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

// search the item form the linked list and return 1 if the search is successfull and return 0 if it is unsucceeful
int searchFromList(node *head, int item)
{
    node *temp = head;
    while (temp != NULL)
    {
        if(temp->data = item) {
            return 1;
        }
    }
    return 0;
}
int main()
{
    node *head = NULL;
    char answer = 'n';
    cout << "Want to create the linked list :";
    cin >> answer;
    if (answer == 'y' || answer == 'Y')
    {
      head = create();
    display(head);
    int item;
    cout << "enter item to search";
    cin >> item;
    cout<<searchFromList(head,item)<<endl;
    }
    else {
        cout<<"Program ends ..."<<endl;
        return 0;
    }
   
    // cout<<head->data<<endl;
    return 0;
}