
#include<iostream>
#include "linkedlist.h"
#include<stddef.h>
using namespace std;


List::List(){
	HEAD = NULL;
	TAIL = NULL;
	
}

List::~List(){}

bool List::isEmpty(){
	if (HEAD==NULL && TAIL == NULL){
		return true;
	}
	else
	{
		return false;
		}
}

void List::addToHead(int data){
	Node* newNode= new Node();
	newNode ->info = data;
	newNode ->next = HEAD;
	HEAD = newNode;
	if(TAIL==NULL)
		TAIL= HEAD;
	
}  

void List::traverse(){
	Node* temp = HEAD;
	
	while(temp!=NULL){
		cout<< temp->info<< "   ";
		temp = temp-> next;
		
		
	}
	
}
int List::removeFromHead(){
	Node* nodeToDelete;
	nodeToDelete =HEAD;
	int num = HEAD->info;
	HEAD = nodeToDelete->next;
	return num;
}

int List::showHead(){
	int num = HEAD->info;
	return num;
}

void List::remove(int data){
		if (HEAD==NULL && TAIL == NULL)
			return;
		if(HEAD ->info == data){
		
			List::removeFromHead();
			HEAD= NULL;
			TAIL = NULL;
	}
	else{
		Node* temp;
		temp = HEAD ->next;
		Node* prev;
		prev = HEAD;
		
		while(temp!= NULL){
			if(temp->info == data){
				prev->next = temp ->next;
				delete temp;
				break;
			}
				
			if(prev ->next== NULL){
				TAIL = prev;
			}
			else{
				prev = prev -> next;
				temp = temp -> next;
			}
		}
		
	}
			
}

bool List::search(int data){
		if (HEAD==NULL && TAIL == NULL)
			return false;
		Node* temp;
		temp= HEAD;
		while (temp!=NULL){
			if (temp->info == data){
				cout<<"Search FOUND"<<endl;
				return true;
			}
			else{
				temp= temp->next;
				
			}
			
		}
		return false;
	
}
void List::addToTail(int data){
	Node* newnode = new Node();
	newnode->info = data;
	newnode->next = NULL;
	TAIL->next = newnode;
	TAIL = newnode;
	
}
void List::add(int data, Node* predessor){
	Node* newNode = new Node();
	newNode->info = data;
	newNode->next = predessor->next;
	predessor->next = newNode;
}

bool List::retrieve(int data, Node * &outputptr) {
		Node* p = new Node();
	p = HEAD;
	while (p != NULL && p->info != data) {
		p = p->next;
	}
	if (p == NULL)	return false;
	else {
		outputptr = p;
		return true;
	}
}

int main(){
	Node* ptr = new Node();
	List list1;
	for (int i = 10; i <= 20; i += 2) {
		list1.addToHead(i);
	}
	if(list1.isEmpty()==true)
		cout<<"List Empty"<<endl;
	else
		cout<<"List Not empty"<<endl;
	
	list1.addToHead(1);
	list1.addToHead(2);
	list1.addToHead(3);
	list1.addToHead(4);
	list1.traverse();
	list1.remove(3);
	list1.removeFromHead();
	list1.search(2);
	list1.addToTail(5);
	list1.retrieve(4, ptr);
	list1.add(2, ptr);
	list1.traverse();
	cout<<endl;
	//cout<<list1.removeFromTail();
//IMPLEMETING STACK 

	cout<<endl<<endl;
	cout<<"STACK IMPLEMENTAION"<<endl;
	Stack stack;
	stack.isEmpty();
	for(int i=2;i<10;i+=2)
		stack.push(i);
	cout<<stack.top()<<endl;
	cout<<stack.top()<<endl;
	cout<<stack.pop()<<endl;
	cout<<stack.pop()<<endl;
	stack.isEmpty();
//implementing queue
	cout<<endl<<endl;
	cout<<"QUEUE IMPLEMENTATION:"<<endl;
	Queue queue;
	queue.isEmpty();
	queue.enqueue(12);
	queue.enqueue(13);
	queue.enqueue(14);
	queue.dequeue();
	queue.isEmpty();
	queue.showitems();
	
	
	return 0;
	
	
}
