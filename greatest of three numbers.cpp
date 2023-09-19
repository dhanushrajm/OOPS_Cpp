#include<iostream>
using namespace std;
class Data
{
	int i,j;
	public:
	int k;
	Data(int a,int b,int c) //Parameterized constructor
	{
		cout<<"\nUsing Parameterized Constructor:";
		if(a>b && a>c)
		{
			cout<<"Largest number is:"<<a;
			i=a;
		}
		else if(b>a && b>c)
		{
			cout<<"Largest number is:"<<b;
			j=b;
		}
		else
		{
			cout<<"Largest number is:"<<c;
			k=c;
		}	
	}
	Data(Data &a) //Copy Constructor
	{
		cout<<"\nUsing Copy Constructor:";
		i=a.i;
		j=a.j;
		k=a.k;
	}
	void display()
	{
		cout<<i<<j<<k;
	}
};

int main()
{
	int x,y,z;
	cout<<"\nEnter 1st number:";
	cin>>x;
	cout<<"\nEnter 2nd number:";
	cin>>y;
	cout<<"\nEnter 3rd number:";
	cin>>z;
	Data d1(x,y,z),d2(d1);
	d1.display();
	d2.display();
	return 0;
}

