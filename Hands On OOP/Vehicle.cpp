#include "Vehicle.hpp"

Vehicle :: Vehicle() {
    this->tahunProduksi = 0;
    this->merek = "Mulan Jamila";
    this->jumlahRoda = 0;    
    this->warna = "None"; 
}

Vehicle :: Vehicle(int tahunProduksi, string merek, int jumlahRoda, string warna) {
    this->tahunProduksi = tahunProduksi;
    this->merek = merek;
    this->jumlahRoda = jumlahRoda;    
    this->warna = warna; 
}

//cctor
Vehicle :: Vehicle(const Vehicle& other) {
    this->tahunProduksi = other.tahunProduksi;
    this->merek = other.merek;
    this->jumlahRoda = other.jumlahRoda;    
    this->warna = other.warna; 
}

// dtor
Vehicle::~Vehicle(){}

// getter
int Vehicle :: getTahunProduksi(){
    return this->tahunProduksi;
}
string Vehicle :: getMerek(){
    return  this->merek;
}
int Vehicle :: getJumlahRoda(){
    return this->jumlahRoda;
}
string Vehicle :: getWarna(){
    return this->warna;
}

void Vehicle :: drive(){
    cout<< "Mengendarai mobil : " << this->merek <<endl;
}

// FUngsi Tmabahan
void Vehicle :: printInfo(){
    cout<< "tahunProduksi: " << this->tahunProduksi << endl;
    cout<< "merek: " << this->merek <<endl;
    cout<< "jumlahRoda: " << this->jumlahRoda <<endl;
    cout<< "warna: " << this->warna <<endl;
} 