#include <iostream>
using namespace std;

float luas, panjang, lebar; //var global

void inputData(){
    cout << "masukkan panjangnya:";
    cin >> panjang;

    cout << "masukkan lebarnya:";
    cin >> lebar;
}

void prosedurLuas(){
    luas = panjang * lebar;
}

void tampilkanLuas(){
    cout << "Luas persegi panjang:" << luas << endl;
}

int main(){
    inputData();
    prosedurLuas();
    tampilkanLuas();
}