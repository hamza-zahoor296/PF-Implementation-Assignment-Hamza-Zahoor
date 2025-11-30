#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int temp;
	
	cout<<"Enter the Value of a : ";
	cin>>a;
	cout<<"Enter the Value of b : ";
	cin>>b;
	
	cout<<"\nValue of a and b Before Swapping ";
	cout<<"\nValue of a : "<<a<<endl;
	cout<<"Value of b : "<<b<<endl;
	
	temp=a;
	a=b;
	b=temp;
	
	cout<<"\nValue of a and b After Swapping ";
	cout<<"\nValue of a : "<<a<<endl;
	cout<<"Value of b : "<<b<<endl;
	
	return 0;
	
}
