#include "Car.hpp"

Car :: Car(): Vehicle(){
    this->banyakKursi = 0;
    this->jumlahPenumpang = 0;
}

Car :: Car(int tahunProduksi, string merek, int jumlahRoda, string warna, int banyakKursi, int jumlahPenumpang):
    Vehicle(tahunProduksi,merek,jumlahRoda,warna)
{
    this->banyakKursi = banyakKursi;
    this->jumlahPenumpang = jumlahPenumpang;
}

Car :: Car(const Car& other): 
    Vehicle(other)
{
    this->banyakKursi = other.banyakKursi;
    this->jumlahPenumpang = other.jumlahPenumpang;
}

//dtor
Car::~Car(){}

//getter
int Car :: getBanyakKursi(){
    return this->banyakKursi;
}
int Car :: getJumlahPenumpang(){
    return this->jumlahPenumpang;
}

// setter
void Car :: setBanyakKursi(int banyakKursi){
    this->banyakKursi = banyakKursi;
}
void Car :: setJumlahPenumpang(int jumlahPenumpang){
    this->jumlahPenumpang = jumlahPenumpang;
}

//FUngsi tambahan
void Car :: printInfo(){
    Vehicle::printInfo();
    cout<< "banyakKursi: " << this->banyakKursi << endl;
    cout<< "jumlah Penumpang: " << this->jumlahPenumpang << endl;

}

void Car :: loadPenumpang(int nPenumpang){
    if(nPenumpang > this->banyakKursi){
        cout << "Kursi mobil tidak cukup" << endl;
    } else {
        cout << nPenumpang << "memasuki mobil" << endl;
    }
}