#include <iostream>
using namespace std;

float luas, panjang, lebar; //var global

void inputData(){
	cout << "Masukkan panjang:";
	cin >> panjang;

	cout << "Masukkan lebarnya:";
	cin >> lebar;
}

float fungsiLuas(){
	return panjang * lebar;
}

float hitungLuasBerparameter(float a, float b){
	return a * b;
}

void tampilkanFungsiLuas(){
	cout << "Luas persegi panjang (fungsi tidak berparameter):" << fungsiLuas()<< endl;
}

void tampilkanBerparameter(){
	cout << "Luas persegi panjang (fungsi berparameter):" << hitungLuasBerparameter(panjang, lebar);
}

int main()
{
	inputData();
	tampilkanFungsiLuas();
	tampilkanBerparameter();
}