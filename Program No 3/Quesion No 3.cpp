#include<iostream>
using namespace std;
int main()
{
	//variable decleration
	int a;
	int b;
	int temp;
	
	a = 5;
	b = 10;
//printing of value before swapping	
    cout<<"Value of a and b before swapping : \n";
	cout<<"Value of a = "<<a<<endl;
	cout<<"Value of b = "<<b<<endl;
	
	//swapping process
	temp=a;
	a=b;
	b=temp;
	
	cout<<"\n";
	
//printing of value after swapping
    cout<<"Values of a and b after swapping:\n";	
	cout<<"Value of a = "<<a<<endl;
	cout<<"Value of b = "<<b<<endl;

  return 0;	
}
