#include<bits/stdc++.h>
using namespace std;
// class node 
class node{
	public:
	int data;
	node* next;
	// constructor
	node(int data) {
		this->data = data;
		this->next = NULL;
	}
};
// class queue 
class Queue {
	node* front;
	node* back;
	public:
	// constructor 
	Queue(){
		front = NULL;
		back = NULL;
	}
	// push function 
	void push( int val ){
		node* temp = new node(val);
		if( front == NULL) {
			front = temp;
			back = temp;
		}
		back->next = temp;
		back = temp;
	}
	// pop function
	void pop () {
		if( front == NULL) {
			cout<<"queue is empty"<<endl;
		}
		node* todelete = front;
		front = front->next;
		delete todelete;
	}
	// peek function
	int peek () {
		if( front == NULL) {
			cout<<"no elements in queue"<<endl;
			return -1;
		}
		return front->data;
	}
	// empty queue or not 
	bool empty () {
		if( front == NULL) {
			return true;
		}
		else {
			return false;
	}
	}
};

int main() {
	Queue q;
	int choose;
	while(true) {
		cout<<"enter \t 1 for push \t 2 for pop \t 3 for peek \t4 for check empty \t 5  for exit :";
		cin>>choose;
		switch(choose) {
			case(1):
				int val;
				cout<<"enter value:";
				cin>>val;
				q.push(val);
				break;
			case(2):
				q.pop();
				break;
			case(3):
				cout<<q.peek()<<endl;
				break;
			case(4):
				if(q.empty()) {
					cout<<"queue is empty"<<endl;
				}
				else {
					cout<<"queue is not empty"<<endl;
				}
				break;
			case(5):
				exit(0);
		}
	}	
	return 0;
}
