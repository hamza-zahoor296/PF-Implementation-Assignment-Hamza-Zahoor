#include <iostream>
using namespace std;
int main()
 {
    int a; 
	int b;
	int c;
	int d;
	
     cout << "Enter Value of a : ";
     cin >> a ;
     cout << "Enter Value of b : ";
	 cin >> b;
	 cout << "Enter Value of c : ";
	 cin >> c; 
	 cout << "Enter Value of d : ";
	 cin >> d;
    
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    if (d > max) max = d;
    
    cout<<"\n";
    cout << "Maximum number is: " << max << endl;
    
    return 0;
    
}
