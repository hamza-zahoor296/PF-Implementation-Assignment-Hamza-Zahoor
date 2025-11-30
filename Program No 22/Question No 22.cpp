#include<iostream>
using namespace std;
int main()
{
	char name[20];
	float height;
	char gender;
	int age;
	
	cout<<"Enter Name : ";
	cin>>name;
	
	cout<<"Enter Age (in years) : ";
	cin>>age;
	
	cout<<"Enter Height (in cm) : ";
	cin>>height;
	
	cout<<"Enter Gender (M/F) : ";
	cin>>gender;
	
    cout << "\n--- Student Data ---" << endl;
	cout<<" Name   : "<<name<<endl;
	cout<<" Age    : "<<age<<endl;
	cout<<" Height : "<<height<<endl;
	cout<<" Gneder : "<<gender<<endl;
	
	return 0;
	
	
}
