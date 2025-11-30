#include<iostream>
using namespace std;
int main()
{
	float a, b, c, s, area;
    cout << "Enter the three sides of the triangle: ";
    cin >> a >> b >> c;
    
    
   s = (a + b + c) / 2;
   area = (s * (s - a) * (s - b) * (s - c));
 

   cout << "\n--- Triangle Area ---" << endl;
   
   cout << "Area = "<<area<<endl;
   
   return 0;
}
