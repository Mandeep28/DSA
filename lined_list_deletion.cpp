#include <bits/stdc++.h>
using namespace std;

// create a node class
class node
{
public:
    int data;
    node *link;
    // constructor
    node(int data)
    {
        this->data = data;
        this->link = NULL;
    }
    // destructor 
    ~node() {
        int value = this->data;
        if(this->link != NULL) {
            delete link;
            link = NULL;
        }
        cout<<"memory is free for "<<value<<endl;
    }
};

// Create a linked list using function
node *createList(node* &tail)
{
    node *temp, *head = NULL;
    char ch = 'y';
    while (ch == 'y' || ch == 'Y')
    {
        int data;
        cout << "enter data :";
        cin >> data;
        if (head == NULL)
        {
            head = new node(data);
            temp = head;
        }
        else
        {
            temp->link = new node(data);
            temp = temp->link;
        }
        cout << "Want to continue (y/n)";
        cin >> ch;
    }
    tail = temp;    
    return head;
}


// display the linked list
void display(node *head)
{
        node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->link;
    }
    cout << "NULL" << endl;
}

// delete function that delete the key position from the linked list 
void deleteNode ( node* &head , node* &tail, int key) {

    if( key == 1) {
        // cout<<"do nothing";
        node* temp = head;
        head = head->link;
        temp->link = NULL;
        delete temp;
    }
    else {
        node *curr, *prev;
        curr = head;
        prev = NULL;
        int count = 1;
        while( count < key) {
            prev = curr;
            curr= curr->link;
            count ++;
        }
    //     cout<<"previous" <<prev->data<<endl;
    //     cout<<"current" <<ptr->data<<endl;
    // if( curr == NULL) {
    //     tail = prev->link;
    // }
    prev->link = curr->link;
    curr->link = NULL;
    delete curr;
    }
}
int main()
{

    node *head = NULL ,*tail =NULL;
    int choice;
    cout << "want to create the list (1/0)";
    cin >> choice;
    if (choice != 1)
    {
        cout << "Program end ....";
        return 0;
    }

    head = createList(tail);
    // head = create();
    display(head);
    cout<<"enter position to delete:";
    int key;
    cin>>key;
    deleteNode(head ,tail,key);
    display(head);
    // for testing 
    // cout<<"Head :"<<head->data<<endl;
    // cout<<"TDail :"<<tail->data<<endl;
    return 0;
}