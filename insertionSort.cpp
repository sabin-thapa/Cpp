#include<iostream>
using namespace std;

void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void InsertionSort(int *array, int size) {
	int key,j;
	for(int i=0; i<size; i++){
		key = array[i];
		while(i>0 && array[i-1]>key){
		
			array[i] = array[i-1];	
			i--;
			}
			array[i]=key;
	}
}



int main() {
   int n;
   cout << "Enter the number of elements: ";
   cin >> n;
   int arr[n];           //create an array with given number of elements
   cout << "Enter elements:" << endl;
   for(int i = 0; i<n; i++) {
      cin >> arr[i];
   }
   cout << "Array before Sorting: ";
   display(arr, n);
   InsertionSort(arr, n);
   cout << "Array after Sorting: ";
   display(arr, n);
}
