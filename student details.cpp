#include<iostream>
using namespace std;
int m1, m2, m3, m4, total, avg;
class Student
{
	public:
	Mark_1()
	{
		cout<<"Enter Mark 1:";
		cin>>m1;
	}
	Mark_2()
	{
		cout<<"Enter Mark 2:";
		cin>>m2;
	}
	Mark_3()
	{
		cout<<"Enter Mark 3:";
		cin>>m3;
	}
	Mark_4()
	{
		cout<<"Enter Mark 4:";
		cin>>m4;
	}
	Total()
	{
		total = m1+m2+m3+m4;
		
	}
	Average()
	{
		avg = total/4;
	}
	Result()
	{
		if(m1>60 && m2>60 && m3>60 && m4>60)
			cout<<"Pass";
		else
			cout<<"Fail";
	}
};
int main()
{
	int n;
	cout<<"\nEnter the No.of Students in the class:";
	cin>>n;
	for(int i=0; i<n; i++)
	{
		Student M1,M2,M3,M4,T,A,R;
		M1.Mark_1();
		M2.Mark_2();
		M3.Mark_3();
		M4.Mark_4();
		T.Total();
		A.Average();
		cout<<"\t\t\n STUDENT DETAILS \t\t\n";
		cout<<"\nMark 1:"<<m1;
		cout<<"\nMark 2:"<<m2;
		cout<<"\nMark 3:"<<m3;
		cout<<"\nMark 4:"<<m4;
		cout<<"\nTotal Mark:"<<total;
		cout<<"\nAverage Mark:"<<avg;
		cout<<"\nFinal Result:";
		R.Result();
		cout<<"\n";
	}
	return 0;
}







