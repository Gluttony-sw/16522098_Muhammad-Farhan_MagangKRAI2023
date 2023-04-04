#include "header\Car.hpp"
#include "header\Truck.hpp"
#include <iostream>
using namespace std;

int main(){
    Car car1; // default
    Truck truck1; // default
    Truck truck2(1996, "Nimar", 6, "merah", 3000);

    // Print info setiap mobil
    cout<< "---------INFO MOBIL--------" << endl;
    cout<< " " << endl;
    cout<< "---------MOBIL 1 (DEFAULT)--------" << endl;
    car1.printInfo();
    cout<< " " << endl;
    cout<< "---------TRUCK 1 (DEFAULT)--------" << endl;
    truck1.printInfo();
    cout<< " " << endl;
    cout<< "---------TRUCK 2 (INPUT USER)--------" << endl;
    truck2.printInfo();
    cout<< " " << endl;
    cout<< " " << endl;

    // Tes fungsi
    cout<< "---------TES FUNGSI--------" << endl;
    cout<< " " << endl;
    cout<< "---------FUNGSI DRIVE (vehicle)--------" << endl;
    car1.drive();
    cout<< " " << endl;
    cout<< "---------FUNGSI LOAD PENUMPANG (car)--------" << endl;
    car1.loadPenumpang(1);
    cout<< " " << endl;
    cout<< " " << endl;

    cout<< "---------FUNGSI DALAM TRUCK (load barang 3300)--------" << endl;
    truck2.loadBarang(3300);
    cout<< " " << endl;
    truck2.setKapasitas(4500);
    cout<< "---------FUNGSI DALAM TRUCK (load barang 3300)--------" << endl;
    truck2.loadBarang(3300);
}