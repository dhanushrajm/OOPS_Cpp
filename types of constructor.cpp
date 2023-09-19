#include<iostream>
using namespace std;
class Data
 {
 	int i, j;
 	public:
 	int k; 
 	Data()
 	{
 		cout<<"\nNon Parametrerized constructor";
 		i=0;
 		j=0;
 	}
 	Data(int a,int b)
 	{
 		cout<<"\nParametrerized constructor";
		i=a;
 		j=b;
 	}
 	Data(Data &a)
 	{
 		cout<<"\nCopy constructor\n";
		i=a.i;
 		j=a.j;
 	}
	void display() //member function
 	{
 		cout<< i<<j;
 	}
 };
int main()
{
	Data d1,d2(10,20),d3(d2); 
 	d1.display(); 
 	d2.display(); 
	d3.display(); 
 	return 0;
}
