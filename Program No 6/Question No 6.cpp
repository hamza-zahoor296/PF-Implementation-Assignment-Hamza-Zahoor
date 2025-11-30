#include<iostream>
using namespace std;
int main()
{
	//decleration of a variables 
	
	int year;
	int months;
	
	//taking of input from the user
	
	cout<<"Enter your age in years : ";
	cin>>year;
	
	//processing of input into months 
	
	months= year*12;
	
	//displaying of results
	
	cout<<"\n Your Age in Months is : "<<months<<endl;
	
	return 0;
}
