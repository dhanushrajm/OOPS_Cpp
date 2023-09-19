#include<iostream>
using namespace std;
struct Employee_VITB
{
    int emp_no;
    char name[20], dept[20], email[25];
    int experience;
    char designation[30];
    float salary;
}employee;

int main()
{
    int i,n;
    cout<<"Enter the Employees in VITB:";
    cin>>n;
    
    for(i=0; i<n; i++)
    {
        cout<<"Enter the Employee Number:";
        cin>>employee.emp_no;
        cout<<"Enter the Employee Name:";
        cin>>employee.name;
        cout<<"Enter the Department Name:";
        cin>>employee.dept;
        cout<<"Enter the E-mail ID:";
        cin>>employee.email;
        cout<<"Enter the Salary:";
        cin>>employee.salary;
        cout<<"Enter the No.of Years of Experience:";
        cin>>employee.experience;
        cout<<"Enter the Designation:";
        cin>>employee.designation;
    }
    
    cout<<"\n\t\t\t\tEMPLOYEE RECORD OF VITB\n";
    cout<<"\n Employee Number \t Employee Name \t Department \t No.of Years of Experience \t Current Designation \t Salary \t E-mail ID\n";
    for(i=0; i<n; i++)
    {
        cout<<employee.emp_no<<"\t"<<employee.name<<"\t"<<employee.dept<<"\t"<<employee.experience<<"\t"<<employee.designation<<"\t"<<"Rs."<<employee.salary<<"\t"<<employee.email<<"\n";
    }
    return 0;
}
