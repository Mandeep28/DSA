#include<bits/stdc++.h>
using namespace std;

// crate a node 
class node {
    public:
        int data;
        node * next;
        // constructor of the node 
        node ( int data) {
            this-> data = data;
            this-> next = NULL;
        }
};

// isnert the node at the start 
void insertAtHead (node* &head, int data) {
    node* temp = new node(data);
    temp->next = head; 
    head = temp;
}

void insertAtTail ( node* &tail, int data) {
    node* temp = new node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(node* &tail, node* &head, int position,  int data) {


    // check if node is to be insert at head 
    if( position == 1) {
        insertAtHead(head, data);
        return ;
    }



    int count = 1;
    node* temp = head;
    while( count < position-1) {
        temp = temp->next;
        count++;
    }


    // check if node is to be insert at the end of the list 
    if(temp->next ==NULL) {
        insertAtTail(tail, data);
        return;
    }


    // insert the node at the given position
    node* nodeToInsert = new node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;

}


// display the all the nodes 
void display ( node* &head) {

    node* temp = head;
    int counter =0;
    while( temp!=NULL) {
        cout<< temp->data <<"->";
        temp = temp->next;
        counter++;
    }
    cout<<"NULL"<<endl;
    // cout<<"Total size of the linked list is :"<<counter<<endl;
}
int main() {
    node *node1 = new node(10);
    // cout<< node1->data <<endl;
    // cout<< node1->next <<endl;
    node* head = node1;
    node* tail = node1;

    display(head);

    insertAtHead(head,12);
    display(head);

    insertAtHead( head, 15);
    display(head);

    insertAtTail(tail, 18);
    display(head);

    insertAtPosition(tail,head, 3, 13);
    display(head);
     insertAtPosition(tail,head, 1, 14);
    display(head);

     insertAtPosition(tail,head, 7, 33);
    display(head);

    cout<<"head :"<<head->data<<endl;
    cout<<"tail :"<<tail->data<<endl;
    
    return 0;
}