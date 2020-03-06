#include <iostream>
#include "arrbst.h"
using namespace std;

BST::BST(){
	for(int i=0; i<MAX_SIZE;i++) {
		this->elements[i]=0;	
	}

}
void BST::add(int data){
	int currentIndex = 0;
	
	while(true){
		
		if(elements[currentIndex]==NULL){
			elements[currentIndex]=data;
			cout<<"Inserted "<<data<<"at index "<<currentIndex<<endl;
			break;
		}
		
		else if(data>elements[currentIndex]){
			if(data==elements[currentIndex]){
				cout<<"Data already present!";
				break;
			}
			else{
				currentIndex = 2*currentIndex+2;
			}
		}
		
		
		else if(data<elements[currentIndex]){
			if(data==elements[currentIndex]){
				cout<<"Data already present!";
				break;
			}
			else{
				currentIndex = 2*currentIndex+1;
			}
		}
	}
}


bool BST::search(int key){
	int currentIndex=0;
	
	while(true){
		if(elements[currentIndex]==NULL){
			cout<<"Data not present"<<endl;
			break;
		}
		else if(key==elements[currentIndex]){
			cout<<"Found "<<key<<"at index "<<currentIndex<<endl;
			break;
		
		}
		
		else if(key>elements[currentIndex]){
			currentIndex = 2*currentIndex+2;
		}
		else if(key<elements[currentIndex]){
			currentIndex = 2*currentIndex+1;
		}
		
	}
	
}
	
	
int BST::getLeftChild(int currentIndex){
	if(elements[currentIndex]!=NULL && (2*currentIndex+1) <= (MAX_SIZE-1)){
		return (2*currentIndex+1);
	}
	else {
		return -1;
	}
}
	

int BST::getRightChild(int currentIndex){
	if(elements[currentIndex]!=NULL && (2*currentIndex+2) <= (MAX_SIZE-1)){
		return (2*currentIndex+2);
	}
	else {
		return -1;
	}
}
	
void BST::preOrderTraversal(int currentIndex){
	if(currentIndex>=0 && elements[currentIndex]!=NULL){
		
		cout<<elements[currentIndex];
		preOrderTraversal(getLeftChild(currentIndex));
		preOrderTraversal(getRightChild(currentIndex));
	}
}
	
	
	
BST::~BST(){
}


int main(){
	
	BST a;
	a.add(1);
	a.add(2);
	a.add(7);
	a.add(4);
	a.search(4);
	
	a.preOrderTraversal(0);
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
