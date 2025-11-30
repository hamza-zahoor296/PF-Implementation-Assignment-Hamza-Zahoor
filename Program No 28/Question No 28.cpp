#include<iostream>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	int disc;
	
	cout<<"Enter the Value of a : ";
	cin>>a;
	
	cout<<"Enter the Value of b : ";
	cin>>b;
	
	cout<<"Enter the Value of c : ";
	cin>>c;
	
	 disc = (b*b) - (4*a*c);
	 
	 cout<<"\n -- Result-- \n";
	 cout<<"Discriminant is  "<<disc<<endl;
	 
	 return 0;
}
