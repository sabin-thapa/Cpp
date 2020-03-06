
#include<iostream>
using namespace std;
class Node{
	 public:
	int info;
	Node* next;
};

class List{
	private:
		Node* HEAD;
		Node* TAIL;
		public:
		List();
		~List();
	
		//functions
		
		bool isEmpty();
		void addToHead(int data);
		void traverse();
		void remove(int data);
		int removeFromHead();
		bool search(int data);
		void addToTail(int data);
		void add(int data, Node* predessor);
		bool retrieve ( int data, Node* &outputptr);
		int showHead();
};
class Stack{
	private:
		List l;
	public:
		void isEmpty(){
			bool a = l.isEmpty();
			if(a==true)
			cout<<"Stack Empty"<<endl;
			else
			cout<<"Stack NOT Empty!"<<endl;
		}
		void push(int data){
			l.addToHead(data);
		}
		int top(){
			return l.showHead();
			
			
		}
		int pop(){
			l.removeFromHead();
		}
			
			
		
};
class Queue{
	private:
		List l;
	public:
		void isEmpty(){
			bool a = l.isEmpty();
			if(a==true)
			cout<<"Queue Empty"<<endl;
			else
			cout<<"Queue NOT Empty!"<<endl;
			
		}
		void enqueue(int data){
			l.addToHead(data);
		}
		void dequeue (){
			l.removeFromHead();
			
		}
		void showitems(){
			l.traverse();
		}
};
