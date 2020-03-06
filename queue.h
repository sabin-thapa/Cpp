#ifndef QUEUE_H
#define QUEUE_H

#define MAX_QUEUE_SIZE 100

class queue{
public:
	queue();
	~queue();

	void enqueue(int element);
	int dequeue();
	int Front();
	int Rear();
	bool isFull();
	bool isEmpty();

private:
	int elements[MAX_QUEUE_SIZE];
	int front, rear;
};

#endif
