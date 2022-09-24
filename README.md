# Program-C-_TLS22
Habib Fabian Fahlesi (Volta)

Program C++ for determining the price of TV after the third year

#include <iostream>

using namespace std;

int main ()

{
	
  double tahun_pertama, tahun_kedua, tahun_ketiga, price;
	
	cout<<"Masukkan harga TV baru : Rp ";
	cin>>price;
	tahun_pertama = 0.85*price;
	cout<<"Harga TV setelah tahun pertama : Rp "<<tahun_pertama<<"\n";
	
	tahun_kedua = 0.9*tahun_pertama;
	cout<<"Harga TV setelah tahun kedua : Rp "<<tahun_kedua<<"\n";
	
	tahun_ketiga = 0.92*tahun_kedua;
	cout<<"Harga TV setelah tahun ketiga : Rp "<<tahun_ketiga<<"\n";
	
	return 0;
}
