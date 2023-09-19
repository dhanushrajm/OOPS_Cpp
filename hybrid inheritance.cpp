#include<iostream>
using namespace std;
class student //base class
{
	private :
	char name[20];
	int rno;
	public:
	void acceptname()
	{
		cout<<"\n Enter Roll no:"; 
		cin>>rno;
		cout<<"\n Enter Name:";
		cin>>name;
	}
	void displayname()
	{
		cout<<"\n Roll no :-"<<rno;
		cout<<"\n Name :-"<<name<<endl; 
	}
};

class theory_mark: public student 
{
	public: 
	int tmark1,tmark2,tmark3,tmark4,tmark5,tmark6;
	void accept_tmark()
	{
		cout<<"\n\tEnter 6 subject theory marks.. ";
		cout<<"\nEnter Theory Mark-1:";
		cin>>tmark1;
		cout<<"\nEnter Theory Mark-2:";
		cin>>tmark2;
		cout<<"\nEnter Theory Mark-3:";
		cin>>tmark3;	
		cout<<"\nEnter Theory Mark-4:";
		cin>>tmark4;	
		cout<<"\nEnter Theory Mark-5:";
		cin>>tmark5;	
		cout<<"\nEnter Theory Mark-6:";
		cin>>tmark6; 
	}
	void display_tmark()
	{
		cout<<"\n\t Theory Marks Obtained ";
		cout<<"\n Theory mark in Language     :"<<tmark1;
		cout<<"\n Theory mark in English      :"<<tmark2;
		cout<<"\n Theory mark in Mathematics  :"<<tmark3;
		cout<<"\n Theory mark in Physics      :"<<tmark4; 
		cout<<"\n Theory mark in Chemistry    :"<<tmark5; 
		cout<<"\n Theory mark in Comp_Science :"<<tmark6;  
	} 
};

class internal_and_practical_mark
{
	public:
	int ipmark1, ipmark2, ipmark3, ipmark4, ipmark5, ipmark6;
	void accept_ipmark()
	{
		cout<<"\n\tEnter 6 subject internal and Practical marks.. ";
		cout<<"\nEnter Internal and Practical Mark-1:";
		cin>>ipmark1;
		cout<<"\nEnter Internal and Practical Mark-2:";
		cin>>ipmark2;
		cout<<"\nEnter Internal and Practical Mark-3:";
		cin>>ipmark3;	
		cout<<"\nEnter Internal and Practical Mark-4:";
		cin>>ipmark4;	
		cout<<"\nEnter Internal and Practical Mark-5:";
		cin>>ipmark5;	
		cout<<"\nEnter Internal and Practical Mark-6:";
		cin>>ipmark6; 
	}
	void display_ipmark()
	{
		cout<<"\n\n\t Internal and Practical Marks Obtained ";
		cout<<"\n Internal and Practical in Language     :"<<ipmark1;
		cout<<"\n Internal and Practical in English      :"<<ipmark2;
		cout<<"\n Internal and Practical in Mathematics  :"<<ipmark3;
		cout<<"\n Internal and Practical in Physics      :"<<ipmark4; 
		cout<<"\n Internal and Practical in Chemistry    :"<<ipmark5; 
		cout<<"\n Internal and Practical in Comp_Science :"<<ipmark6;  
	} 
};
		
class exam_result: public theory_mark, public internal_and_practical_mark
{ 
	public: 
	int total; 
	int Lang, English, Maths, Physics, Chemistry, Comp_Science;
	void result() 
	{
		Lang = tmark1 + ipmark1;
		English = tmark2 + ipmark2;
		Maths = tmark3 + ipmark3;
		Physics = tmark4 + ipmark4;
		Chemistry = tmark5 + ipmark5;
		Comp_Science= tmark6 + ipmark6;
		total=Lang + English + Maths + Physics + Chemistry + Comp_Science;
	}
	void showresult()
	{
		cout<<"\n\t\t Mark in Each Subject:";
		cout<<"\n Language     :"<<Lang;
		cout<<"\n English      :"<<English;
		cout<<"\n Mathematics  :"<<Maths;
		cout<<"\n Physics      :"<<Physics;
		cout<<"\n Chemistry    :"<<Chemistry;
		cout<<"\n Comp_Science :"<<Comp_Science;
		cout<<"\n-------------------------";
		cout<<"\nTOTAL MARK SCORED : "<<total; 
		cout<<"\n-------------------------";
	} 
};


int main()
{
	exam_result r1;
	r1.acceptname(); 
	r1.accept_tmark(); 
	r1.accept_ipmark();
	r1.result();
	cout<<"\n\t\tOUTPUT:";
	r1.displayname(); 
	r1.display_tmark(); 
	r1.display_ipmark();
	r1.showresult(); 
	return 0;
}


