#include <iostream>
using namespace std;
void merge(int *,int, int , int );

void mergeSort(int *a, int low, int high){
	if(low<high){
		int mid = (low+high)/2;
		mergeSort(a,low,mid);
		mergeSort(a,mid+1,high);
		merge(a,low,high,mid);
	}
}

void merge(int *a, int low, int high, int mid){
	int i,j,k,c[50];
	i= low;
	j= mid+1;
	k=low;
	
	while(i<=mid && j<=high){
		if(a[i] < a[j]){
			c[k] = a[i];
			k++;
			i++;
		}
		else{
			c[k] = a[j];
			k++;
			j++;
			
		}
	}
	
	while(i<=mid){
			c[k] = a[i];
			k++;
			i++;
	}
	
	while(j<=high){
			c[k] = a[j];
			k++;
			j++;
	}
	
	for(i=low;i<k;i++){
		a[i] = c[i];
	}
}

int main()
{
    int myarray[30], num;
    cout<<"Enter number of elements to be sorted:";
    cin>>num;
    cout<<"Enter "<<num<<" elements to be sorted:";
    for (int i = 0; i < num; i++) { cin>>myarray[i];
    }
    mergeSort(myarray, 0, num-1);
    cout<<"Sorted array\n";
    for (int i = 0; i < num; i++)
    {
        cout<<myarray[i]<<"\t";
    }
}
