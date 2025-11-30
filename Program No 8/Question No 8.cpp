#include<iostream>
using namespace std;
int main()
{
	float farenheit,celcius;
	
	cout<<"Enter the temperatue in farenheit : ";
	cin>>farenheit;
	
	celcius = (5.0/9.0)*(farenheit - 32);
	
	cout<<"Temperature in Celcius : "<<celcius<<endl;
	return 0;
	
}
