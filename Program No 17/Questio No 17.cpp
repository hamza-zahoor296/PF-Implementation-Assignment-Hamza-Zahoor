#include<iostream>
using namespace std;
int main()
{
	double number = 15.58971;
	int intPart;
	double fracPart;
	
	intPart = (int)number;
    fracPart = number - intPart;
    
    cout<<"Original Number is "<<number<<endl;
    cout<<"\nIntegral Part is "<<intPart<<endl;
    cout<<"\nFractional Part is "<<fracPart<<endl;
    
    return 0;
}
