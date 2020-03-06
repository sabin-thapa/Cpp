#include <iostream>
#define MAX_SIZE 20
using namespace std;

static int length;

//prototypes
void getData(int list[]);
void quickSort(int list[], int low, int high);
int partition(int list[], int low, int high);
void display(int sortedList[]);
void swap(int *a, int *b);

//definitions

void getData(int list[]){
	cout<<"Enter the no. of data you want to sort: "<<endl;
	cin>>length;
	
	for(int i=0; i<length; i++){
		
		cout<<"Data no. "<< (i+1)<<":";
		cin>>list[i];
	}
}

void quickSort(int list[], int low, int high)
{
    if (low < high)
    {
        int pivot = partition(list, low, high);
        quickSort(list, low, pivot - 1);
        quickSort(list, pivot + 1, high);
    }
}

int partition(int arr[], int low, int high){
	int pivot = arr[high];
	int i = (low-1);
	
	for(int j=low; j<=high-1; j++){
		
		if(arr[j]<pivot){
			i++;
			swap(&arr[i],&arr[j]);
		}
		
	}
		swap(&arr[i+1],&arr[high]);
		return (i+1);
}

void swap(int *a, int *b){
	int temp;
	temp = *a;
	*a=*b;
	*b=temp;
}


void display(int sortedList[]){
	cout<<"The sorted list is: "<<endl;
	for(int i =0; i<length; i++){
	
		if(i< (length-1)){
			cout<<sortedList[i]<<",";
		}
		else {
			cout<<sortedList[i]<<".";
		}
	}
}



int main(){
	int list[MAX_SIZE];
	cout<<"Data entry:"<<endl;
	getData(list);
	int low = 0, high = length-1;
	quickSort(list,low,high);
	display(list);
	
	return 0;
	
}

