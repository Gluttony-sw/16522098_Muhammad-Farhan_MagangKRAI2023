#include "..\header\Truck.hpp"


//ctor
Truck :: Truck(){
    this-> kapasitas = 0;
}

Truck :: Truck(int tahunProduksi, string merek, int jumlahRoda, string warna, int kapasitas):
    Vehicle(tahunProduksi,merek,jumlahRoda,warna)
{
    this-> kapasitas = kapasitas;

}

//cctor
Truck :: Truck(const Truck& other):
    Vehicle(other)
{
    this->kapasitas = other.kapasitas;

}

//dtor
Truck ::  ~Truck(){}

//getter
int Truck :: getKapasitas(){
    return this->kapasitas;
}

// setter
void Truck :: setKapasitas(int kapasitas){
    this->kapasitas = kapasitas;
}

// Fungsi Tambahan
void Truck :: printInfo(){
    Vehicle::printInfo();
    cout<< "kapasitas: " << this->kapasitas << endl;

}

void Truck :: loadBarang(int beratBarang){
    if (beratBarang > this->kapasitas){
        cout << "Kapasitas Truck tidak cukup" << endl;
    } else {
        cout << beratBarang << "telah dimuat pada truck" << endl;
    }
}