#include<iostream>
using namespace std;
int main()
{
	double millimeters,inches;
	
	cout<<"Enter Length in Milimeters : ";
	cin>>millimeters;
	
       inches = millimeters / 25.4;
       
       cout<<"Lenght in Inches : "<<inches<<endl;
       return 0;
       

}
