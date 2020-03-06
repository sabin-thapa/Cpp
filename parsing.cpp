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
	stack s;
	string exp;
	cout<<"Enter an expression:";
	cin>>exp;
	
	for(int i=0; i<exp.length();i++){
	
		char c=exp[i];
	
		if(c=='('){
			s.push(i);
			cout<<c<<" has been pushed."<<endl;
		}
		else if(c==')'){
			if(!s.isEmpty()){
				s.pop();
			}
			else{
				return false;
			}
		}
	}
		if(s.isEmpty()){
			
			cout<<"No extra parenthesis.";

		}
		else if(!s.isEmpty()){
			cout<<"Extra"<<endl;
	
		}

	
	
	
	
	
	
	
	return 0;
}
