#include<iostream>
using namespace std;
int main()
{
	//variable decleration
	int a;
	int b;
	int Sum;
	int Product;
	
	//taking values from user as input
	
	cout<<"Enter the Value of a : ";
	cin>>a;
	cout<<"Enter the Value of b : ";
	cin>>b;
	
	//processing of values
	
	Sum=a+b;
	Product = a*b;
	
	
	//printing results
	
	cout<<"\n";
	cout<<"Sum of a and b : "<<Sum<<endl;
	cout<<"Product of a and b : "<<Product<<endl;
	
	return 0;
}
