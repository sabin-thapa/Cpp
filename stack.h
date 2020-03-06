#define MAX_STACK_SIZE 100

class Stack{
	private:
		int elements[MAX_STACK_SIZE];
		int top;
	public:
		Stack();
		~Stack();
		
		void push(int element);
		int pop();
		int peek();
		bool isEmpty();
		bool isFull();
};

