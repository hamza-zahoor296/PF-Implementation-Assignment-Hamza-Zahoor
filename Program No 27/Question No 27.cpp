#include<iostream>
using namespace std;
int main()
{
	 int hours;
	 int minutes;
	 int seconds;
	 int tsec;
	 
     cout<<"Enter the Time in Following Manner ";
     
     cout<<"\nEnter Time in Hours : ";
     cin>>hours;
     
     cout<<"Enter Time in Minutes : ";
     cin>>minutes;
     
     cout<<"Enter Time in Seconds : ";
     cin>>seconds;
     
     tsec=(hours*3600)+(minutes*60)+seconds;
     
     cout<<"\n-- Final Result --\n ";
     cout<<"The Total Time in Seconds is "<<tsec<<endl;
     
     return 0;
}

