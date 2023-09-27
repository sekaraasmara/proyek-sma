#include <iostream>
#include <math.h>
using namespace std;
main(){
	double a,b,c;
	
	cout << "Mencari sisi c (sisi miring)" << endl;
	
	cout << "Input sisi a = ";
	cin >> a;
	
	cout << "Input sisi b = ";
	cin >> b;
	
	c = sqrt(pow(a,2)+pow(b,2));
	cout << "Sisi c = " << c;
	return 0;
}

