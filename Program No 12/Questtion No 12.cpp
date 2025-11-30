#include<iostream>
using namespace std;
int main()
{
	const float Pi =3.1417;
	float r,h,volume;
	
	cout<<"Enter the radius : ";
	cin>>r;
	cout<<"Enter the Height : ";
	cin>>h;
	
	volume = Pi*r*r*h;
	
	cout<<"Volume of a cylinder is : "<<volume<<endl;
	
	return 0;
	
}
