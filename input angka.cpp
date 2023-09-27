#include<iostream>
#include<string>
using namespace std;
int main(){
	std::string numbers[] = {
	" ", "satu","dua","tiga","empat","lima","enam","tujuh","delapan","sembilan","sepuluh"
	};
	
	int angka;
	
	std::cout << "Masukkan angka (1-10): ";
	std::cin >> angka;
	
	if(angka >= 1 && angka <=10){
		std::cout << "Angka" << angka << " dalam teks:" <<numbers[angka] <<std::endl;
	}else{
		std::cout<<"Angka diluar rentangg 1-10"<<std::endl;
	}
	
	return 0;
}
