#include<iostream>
using namespace std;
#define Pi 3.1417
int main()
{
	double r,area;
	
	cout<<"Enter the radius of a circle : ";
	cin>>r;
	
	area=Pi*r*r;
	
	cout<<"Area of a circle is : "<<area<<endl;
	
	return 0;
}
