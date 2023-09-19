#include<iostream>
using namespace std;
class A
{
    public:
    	int arr[5];
    int max = arr[0];
    int min = arr[0];
    float sum = arr[0];
    A(float a)
    {
        for(int i=1; i<sizeof(arr); i++)
        {
            sum += arr[i];
            if(arr[i] > max)
                max = arr[i];
            else if(arr[i] < min)
                min = arr[i];
        }
        float x = ((sum - max - min) / (sizeof(arr) -2));
        x=a;
    }
    A(A &j)
    {
    	int x;
		float a;
        x=j.a;                 //Copy constructor
    }
};

int main()
{
    int arr = {5,7,2,4,9};
    cout<<"\nOriginal Array:"<<arr;
    A a1(arr);               // Calling the parameterized constructor.  
    A a2(a1);                //  Calling the copy constructor.  
    cout<<a2.x;  
    return 0; 
}
