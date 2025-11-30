#include<iostream>
using namespace std;
int main()
{
	int p1;
	int p2;
	int p3;
	int p4; 
	int p5;
    int total;
    float average;
    
      cout << "Enter marks of 5 subjects (out of 100): " << endl;
      cout << "Subject No 1: ";
      cin >> p1;
      cout << "Subject No 2: ";
      cin >> p2;
      cout << "Subject No 3: "; 
      cin >> p3;
      cout << "Subject No 4: ";
      cin >> p4;
      cout << "Subject No 5: ";
      cin >> p5;
      
      
     total = p1 + p2 + p3 + p4 + p5;
     average = total / 5.0;
     
     
     cout << "\n--- Student Result ---" << endl;
     
     cout << "Total Marks = " << total << endl;
     cout << "Average Marks = " << average<<endl;
 
 return 0;

}
