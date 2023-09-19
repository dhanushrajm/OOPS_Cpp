#include <iostream>
using namespace std;

// Function to print an array
void printArray(int array[], int size) 
{
  	for (int i = 0; i < size; i++) 
	{
    	cout << array[i] << " ";
  	}
  	cout << endl;
}

void insertionSort(int array[], int size) 
{
  	for (int step = 1; step < size; step++) 
	{
    	int key = array[step];
    	int j = step - 1;

    	// For descending order, change key<array[j] to key>array[j].
    	while (key < array[j] && j >= 0) 
		{
      		array[j + 1] = array[j];
      		--j;
    	}
    	array[j + 1] = key;
  	}
}

// Driver code
int main() 
{
  	int data[] = {-5, 10, 2, 15, 3, 8};
  	int size = sizeof(data) / sizeof(data[0]);
  	insertionSort(data, size);
  	cout<<"Insertion Sort:\n";
  	cout << "Sorted array in ascending order:\n";
  	printArray(data, size);
}
