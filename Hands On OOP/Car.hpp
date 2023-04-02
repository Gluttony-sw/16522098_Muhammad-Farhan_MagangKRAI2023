#ifndef __CAR_HPP__
#define __CAR_HPP__
#include "Vehicle.hpp"

class Car: public Vehicle{
    private:
        // Atribut
        int banyakKursi;
        int jumlahPenumpang;
    
    public:
        //ctor
        Car();
        Car(int tahunProduksi, string merek, int jumlahRoda, string warna, int banyakKursi, int jumlahPenumpang);

        //cctor
        Car(const Car& other);

        //dtor
        ~Car();

        // getter
        int getBanyakKursi();
        int getJumlahPenumpang();

        // setter
        void setBanyakKursi(int banyakKursi);
        void setJumlahPenumpang(int jumlahPenumpang);

        //FUngsi tambahan
        void loadPenumpng(int nPenumpang);
        void printInfo();

};

#endif // __CAR_HPP__