#include<iostream>
#include<conio.h>
#include<exception>
using namespace std;
int main()
{
	int a,b;
	cout<<"Enter a number A:";
	cin>>a;
	cout<<"Enter a number B:";
	cin>>b;
	try
	{
		if(b==0)
		{
			throw b;
		}
		else
		{
			cout<<"Division:"<<a/b;
		}
	}
	catch(int x)
	{
		cout<<"Entered val "<<x<<" is incorrect";
		cout<<endl<<"please enter value other than zero";
	}
	return 0;
}

