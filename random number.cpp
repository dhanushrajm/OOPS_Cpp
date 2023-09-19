#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;
int main()
{
	srand(time(0));
	int num, a, chance=10;
	num=rand() % 10 + 1;       //random number from 1 to 10
	
	do
	{
		cout<<"\nEnter a number (0-9):";
		cin>>a;
		chance=chance-1;
		if(a==num)
		{
			cout<<"\nGuessed Correctly\n";
		}
		else
		{
			cout<<"\nNot Correct..... Try again ";
			cout<<chance;
			cout<<" more chances left\n";
		}
		if (chance==0)
		{
			break;
		}
	}while(a!=num);
	
	return 0;
}



