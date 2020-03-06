#include <iostream>
using namespace std;
#include "dll.h"


List::List(){
//	head = NULL;
	tail = NULL;
}

void List::addToHead(int data){
	Node *newNode = new Node();
	newNode->info = data;
	newNode->prev = NULL;
	newNode->next = head;
	if(head != NULL){
		head->prev = newNode;
		head = newNode;
	}
}
	
void List::display(){
	Node* temp = head;
	while(temp != NULL){
		cout<<temp->info<<" ";
		temp = temp->next;
	}
	
}




int main(){
	List l;
	l.addToHead(5);
	l.addToHead(52);
	l.addToHead(55);
	l.addToHead(53);
	l.addToHead(35);
	cout<<"The DLL is"<<endl;
	l.display();
	
	return 0;
}
