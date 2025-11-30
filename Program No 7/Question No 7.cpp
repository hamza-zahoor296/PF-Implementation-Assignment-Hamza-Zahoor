#include<iostream>
using namespace std;
int main()
{
	int rollNo;
	int PF;
	int IC;
	int CG;
	float avg,total;
	
	cout<<"Enter your Roll No : ";
	cin>>rollNo;
	
	cout<<"\n Enter your makrs in Programming Fundamentals : ";
	cin>>PF;
	cout<<"\n Enter your marks in Introduction to Computing : ";
	cin>>IC;	
	cout<<"\n Enter your marks in Computer Graphics : ";
	cin>>CG;
	
	total = PF+IC+CG;
	avg = PF+IC+CG/3;
	
	cout<<"\n";
	cout<<"Your Roll NO  : "<<rollNo<<endl;
	cout<<"Total marks   : "<<total<<endl;
	cout<<"Average marks : "<<avg<<endl;
	
	return 0;
}
