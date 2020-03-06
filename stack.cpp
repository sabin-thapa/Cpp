#include "Stack.h"
#include<iostream>
using namespace std;

 Stack::Stack(){
 top = -1;
}
bool Stack::isEmpty(){
 return top<0;
}
bool Stack::isFull(){
return top>=MAX_STACK_SIZE-1;
}
void Stack::push(int element){
if(isFull()){
cout<< "Cannot push"<<element<<"Stack Overflow";
    }
    else{
    top++;
    this->elements[top] = element;
    }
}
int Stack::pop(){
if(isEmpty()){
cout<< "Cannot pop"<<endl<< "Stack Underflow";
}
else{
return elements[top--];
}
}
int Stack::peek(){
if(isEmpty()){
cout<< "Cannot pop"<<endl<< "Stack Underflow";
}
else{
return elements[top];
}
}
Stack::~Stack(){
}


int main()
{
Stack s;
s.push(4);
s.push(3);
s.push(2);
s.push(1);
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;

}

