#include <iostream>
using namespace std;

float penjumlahan (float a, float b){
	return a+b;
}

float pengurangan (float a, float b){
	return a-b;
}

float perkalian (float a, float b){
	return a*b;
}

float pembagian (float a, float b){
	return a/b;
}

int main ()
{
	float a,b;
    int pilihan;

    cout<<"\n\t\t\t\tHabib Fabian Fahlesi\n\t\t\t\t\tVolta\n\t\t\t\tTeknologi Informasi\n\n";
	cout<<"Program C++ Kalkulator\n\n";

	cout<<"PILIH OPERASI\n1.PENJUMLAHAN\n2.PENGURANGAN\n3.PERKALIAN\n4.PEMBAGIAN\n\nMasukkan Pilihan Angka: ";
	cin>>pilihan;
	cout<<"\n\n";

	if (pilihan>=1 && pilihan<=4)
	{
		cout<<"Masukkan Angka Pertama: ";
		cin>>a;
		
		cout<<"Masukkan Angka Kedua: ";
		cin>>b;
		cout<<"\n\n";
		
		switch(pilihan)
		{
			case 1 : cout<<a<<" + "<<b<<" = "<<penjumlahan(a,b);
			break;
			case 2 : cout<<a<<" - "<<b<<" = "<<pengurangan(a,b);
			break;
			case 3 : cout<<a<<" x "<<b<<" = "<<perkalian(a,b);
			break;
			case 4 : cout<<a<<" / "<<b<<" = "<<pembagian(a,b);
			break;
		}
	}
	else
	{
		cout<<"Angka Salah Tolong Masukkan Angka 1-4!!!\n";
	}
	
	return 0;
}

