#include <iostream>
using namespace std;
int main(){
	int n, i;
	
	cout << "Program Faktorial" << endl;
	
	cout << "Masukkan nilai: ";
	cin >> n;
	
	for (i = 0; i <= n; i++) {
		cout << n - i << endl;
	}
	return 0;
}

