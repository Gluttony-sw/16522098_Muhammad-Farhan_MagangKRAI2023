#ifndef __VEHICLE_HPP__
#define __VEHICLE_HPP__
#include <iostream>
using namespace std;


class Vehicle {
    protected:
        // Atribut
        int tahunProduksi;
        string merek;
        int jumlahRoda;
        string warna;
    
    public:
        //Ctor
        Vehicle();
        Vehicle(int tahunProduksi, string merek, int jumlahRoda, string warna);

        //cctor
        Vehicle(const Vehicle& other);

        // dtor
        ~Vehicle();

        // assignment
        Vehicle& operator=(const Vehicle& other);

        // getter
        int getTahunProduksi();
        string getMerek();
        int getJumlahRoda();
        string getWarna();

        // setter
        void setTahunProduksi(int tahunProduksi);
        void setMerek(string merek);
        void setJumlahRoda(int jumlahRoda);
        void setWarna(string warna);

        // Method
        void printInfo();
        void drive();        

};

#endif