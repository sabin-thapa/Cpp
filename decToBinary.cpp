//TO CONVERT A DECIMAL NUMBER INTO BINARY
#define MAX_SIZE 100
#include <iostream>
using namespace std;

class stack{
	private:
		int top;
		int arr[MAX_SIZE];
	public:
		bool isEmpty();
		int pop();
		void push(int data);
		stack();
		
};


stack::stack(){
	top = -1;
}

bool stack::isEmpty(){
	return top ==-1;
	
}

int stack::pop(){
	if(isEmpty()){
		cout<<"Stack Empty.";
		return -1;
	}
	else {
		int val = arr[top];
		top--;
		return val;
	}
}

void stack::push(int data){
	if(top==MAX_SIZE-1){
		cout<<"Stack full";
		
	}
	else{
		arr[++top] = data;
	}
}





int main(){
	cout<<"Enter a decimal number:"<<endl;
	int dec;
	cin>>dec;
	stack s;
	while(dec>0){
		int digit = dec%2;
		s.push(digit);
		dec = dec/2;
				
	}
	while(!s.isEmpty()){
		int digit = s.pop();
		cout<<digit;
	}
	
	
	

	
	return 0;
}
