#include<bits/stdc++.h>
using namespace std;
#define n 10
// create a class queue
class Queue{
	int * arr;
	int front , back;
	public:
	// constructor 
	Queue(){
		arr = new int[n];
		front = -1;
		back =-1;
	}
	// insert into queue
	void push(int val) {
		if(back == n-1){
			cout<<"queue is full "<<endl;
		}
		 // if first element is inserted 
		if( front == -1){
			front ++;
		}
		back ++;
		arr[back] = val;
	}
	//pop ( delete the element form queue)
	void pop() {
		if( front ==-1 || front > back) {
			cout<<"no elements in queue"<<endl;
		}
		front ++;
	}
	// peek function 
	int peek() {
		if( front ==-1 || front > back) {
			cout<<"no elements in queue"<<endl;
			return -1;
		}
		return arr[front];
	}
	//queeu is empty or not 
	bool empty() {
		if( front ==-1 || front > back) {
			return true;
		}
		return false;
	}
	
};
int main() {

	Queue q;
	q.push(1);
	q.push(2);
	q.push(3);
	q.push(4);

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
