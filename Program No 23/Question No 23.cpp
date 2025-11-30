#include<iostream>
using namespace std;
int main()
{
	const double PI = 3.1417;
    float radius; 
	float area;
	float circumference;
	
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    
    
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
   
   
   cout << "\n--- Circle Properties ---" << endl;
   cout << "Radius: " << radius << endl;
   cout << "Area: " << area << endl;
   cout << "Circumference: " << circumference << endl;
   
   return 0;
}
