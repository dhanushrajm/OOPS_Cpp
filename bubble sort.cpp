#include <iostream>
using namespace std;

// perform bubble sort
void bubbleSort(int array[], int size) 
{
  	// loop to access each array element
  	for (int step = 0; step < size - 1 ; ++step) 
  	{
    	// loop to compare array elements
    	for (int i = 0; i < size - step -1 ; ++i) 
		{
      		// change > to < to sort in descending order
      		if (array[i] > array[i + 1]) 
	  		{
        		int temp = array[i];
        		array[i] = array[i + 1];
        		array[i + 1] = temp;
      		}
    	}
  	}
}

// print array
void printArray(int array[], int size) 
{
  	for (int i = 0; i < size; ++i) 
  	{
    	cout << "  " << array[i];
  	}
  	cout << "\n";
}

int main() 
{
  	int data[] = {-2, 45, 2, 11, -5};
  
  	// find array's length
  	int size = sizeof(data) / sizeof(data[0]);
  
  	bubbleSort(data, size);
  	cout<<"Bubble Sort:\n";
  	cout << "Sorted Array in Ascending Order:\n";  
  	printArray(data, size);
}
