#include <iostream>
using namespace std;

// function to swap the the position of two elements
void swap(int *a, int *b) 
{
  	int temp = *a;
  	*a = *b;
  	*b = temp;
}

// function to print an array
void printArray(int array[], int size) 
{
  	for (int i = 0; i < size; i++) 
	{
    	cout << array[i] << " ";
  	}
  	cout << endl;
}

void selectionSort(int array[], int size) 
{
  	for (int step = 0; step < size - 1; step++) 
	{
    	int min_idx = step;
    	for (int i = step + 1; i < size; i++) 
		{
			// To sort in descending order, change > to < in this line.
      
      		if (array[i] < array[min_idx])
        		min_idx = i;
    	}
		// put min at the correct position
    	swap(&array[min_idx], &array[step]);
  	}
}

// driver code
int main() 
{
  	int data[] = {-2, 45, 2, 11, -5};
  	int size = sizeof(data) / sizeof(data[0]);
  	selectionSort(data, size);
  	cout<<"Selection Sort:";
  	cout << "\nSorted array in Acsending Order:\n";
  	printArray(data, size);
}
