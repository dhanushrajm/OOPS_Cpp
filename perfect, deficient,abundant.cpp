#include<iostream>
using namespace std;
int main()
{
	int n;
	int sum=0;
	cout<<"\nEnter a Number:";
	cin>>n;
	for(int i=1;i<n;i++)
	{
		if((n/i)*i==n)
		{
			sum+=i;
			
		}
	}
	if(sum==n)
	{
		cout<<n<<" is a Perfect Number\n";
	}
	else if(sum<n)
	{
		cout<<n<<" is a Deficient Number\n";
	}	
	else if(sum>n)
	{
		cout<<n<<" is a Abundant Number\n";
	}
	return 0;
}




