#include "queue.h"
#include<iostream>
using namespace std;

queue::queue() {
	front = -1;
	rear = -1;
}

queue::~queue() {}

void queue::enqueue(int element) {
	if (front >= MAX_QUEUE_SIZE - 1) {
		cout << "cannot enqueue" << element << ". queue overflow." << endl;
	}
	else {
		rear++;
		this->elements[rear] = element;
	}
}

int queue::dequeue() {
	if (isEmpty()) {
		cout << "queue underflow";
		return -1;
	}
	else {
		return elements[++front];
	}
}

int queue::Rear() {
	if (isEmpty()) {
		cout << "queue underflow" << endl;
		return -1;

	}
	else return elements[rear];
}

int queue::Front() {
	if (isEmpty()) {
		cout << "queue underflow" << endl;
		return -1;
	}
	else return elements[front + 1];
}

bool queue::isEmpty() {
	if (front == rear)	return true;
	else 		return false;
}


int main() {
	queue s;
	s.enqueue(5);
	s.enqueue(10);
	s.enqueue(500);
	cout << s.dequeue() << endl;
	s.enqueue(1);
	s.enqueue(4);
	cout << s.dequeue() << endl;
	cout << s.dequeue() << endl;
	cout << s.dequeue() << endl;
	cout << s.dequeue() << endl;
	cout << s.dequeue() << endl;
	s.enqueue(1);
	s.enqueue(4);
	cout << s.dequeue() << endl;
}
