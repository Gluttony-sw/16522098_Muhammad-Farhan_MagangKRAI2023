#ifndef __TRUCK_HPP__
#define __TRUCK_HPP__
#include "Vehicle.hpp"

class Truck: public Vehicle
{
    private:
        // Atribut
        int kapasitas;
    
    public:
        //ctor
        Truck();
        Truck(int tahunProduksi, string merek, int jumlahRoda, string warna, int kapasitas);

        //cctor
        Truck(const Truck& other);

        //dtor
        ~Truck();

        // getter
        int getKapasitas();

        // setter
        void setKapasitas(int kapasitas);

        //FUngsi tambahan
        void printInfo();
        void loadBarang(int beratBarang);


};

#endif